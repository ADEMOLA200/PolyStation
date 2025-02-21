#include <SDL2/SDL.h>

class DualSense {
public:
  void poll_events() {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
      if (event.type == SDL_JOYBUTTONDOWN) {
        // TODO:
        // Map to PS5 button layout
      }
    }
  }
};
