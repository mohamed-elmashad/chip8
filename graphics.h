#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <cstdint>

class Graphics {
public:
    Graphics();
    void Update();
    bool DrawSprite(uint8_t x, uint8_t y, uint8_t height, uint8_t* sprite);

private:
    // Declare screen buffer and SDL objects
};

#endif
