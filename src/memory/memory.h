#ifndef MEMORY_H
#define MEMORY_H


#include <cstdint>

class Memory {
public:
    Memory();
    uint8_t Read(uint16_t address);
    void Write(uint16_t address, uint8_t data);

private:
    // Declare memory array
};

#endif
