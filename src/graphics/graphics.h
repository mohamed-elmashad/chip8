#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <cstdint>
#include <SDL.h>

class Graphics {
public:
    Graphics();
    void Update();
    bool DrawSprite(uint8_t x, uint8_t y, uint8_t height, uint8_t* sprite);

private:
    // Declare screen buffer and SDL objects
    uint32_t screenBuffer[64 * 32];
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Texture* texture;

    // Declare screen width and height
    const int SCREEN_WIDTH = 640;
    const int SCREEN_HEIGHT = 320;

    // Declare screen scale
    const int SCREEN_SCALE = 10;
};

#endif
