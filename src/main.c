#include <SDL.h>
#include <SDL_video.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  if (SDL_Init(SDL_INIT_VIDEO) != 0) {
    printf("SDL_Init failed with error: %s\n", SDL_GetError());
    exit(1);
  }

  SDL_Window *window = SDL_CreateWindow("Lesson 1",
                                        100, 100, 800, 600,
                                        SDL_WINDOW_OPENGL);

  SDL_Delay(1000);

  SDL_Quit();
  return 0;
}
