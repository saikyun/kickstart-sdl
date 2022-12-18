#include <SDL.h>
#include <SDL_video.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("Main starting...\n");

  if (SDL_Init(SDL_INIT_VIDEO) != 0) {
    printf("SDL_Init failed with error: %s\n", SDL_GetError());
    exit(1);
  }

  SDL_Window *window = SDL_CreateWindow("Lesson 1",
                                        100, 100, 800, 600,
                                        SDL_WINDOW_OPENGL);

  SDL_Surface* screen_surface = SDL_GetWindowSurface(window);
  SDL_FillRect(screen_surface, NULL, SDL_MapRGB(screen_surface->format, 0xFF, 0xF0, 0xFF));
  SDL_UpdateWindowSurface(window);

  SDL_Event e;
  int quit = 0;
  while (quit == 0) {
    while (SDL_PollEvent(&e)) {
      if (e.type == SDL_QUIT) {
        quit = 1;
      }
    }
  }

  SDL_DestroyWindow(window);

  SDL_Quit();

  return 0;
}
