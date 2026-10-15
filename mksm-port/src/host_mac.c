/* macOS host glue: Cocoa only allows window creation on the main thread, but
 * the NV2A renderer first touches the display from whichever thread draws
 * first. Create the SDL window and GL context here, on the main thread, and
 * hand them over through the renderer's nv2a_gl_adopt_window hook. */
#include <SDL2/SDL.h>
#include <stdio.h>

static SDL_Window *s_win;
static SDL_GLContext s_ctx;

int mksm_host_create_window(void)
{
    if (SDL_InitSubSystem(SDL_INIT_VIDEO) != 0) {
        fprintf(stderr, "[HOST] SDL video: %s\n", SDL_GetError());
        return 0;
    }
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_FLAGS, SDL_GL_CONTEXT_FORWARD_COMPATIBLE_FLAG);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    s_win = SDL_CreateWindow("Mortal Kombat: Shaolin Monks (recomp)",
                             SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                             1280, 720,
                             SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
    if (!s_win) {
        fprintf(stderr, "[HOST] window: %s\n", SDL_GetError());
        return 0;
    }
    s_ctx = SDL_GL_CreateContext(s_win);
    if (!s_ctx) {
        fprintf(stderr, "[HOST] GL context: %s\n", SDL_GetError());
        SDL_DestroyWindow(s_win);
        s_win = NULL;
        return 0;
    }
    SDL_GL_MakeCurrent(s_win, NULL);   /* the renderer's thread takes it */
    fprintf(stderr, "[HOST] window and GL context created on the main thread\n");
    return 1;
}

int nv2a_gl_adopt_window(void **win, void **ctx)
{
    if (!s_win || !s_ctx)
        return 0;
    *win = s_win;
    *ctx = s_ctx;
    return 1;
}
