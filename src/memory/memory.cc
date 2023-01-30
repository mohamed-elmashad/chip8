#include "memory.h"

Memory::Memory() {
    // Clear memory and load font set
    for (int i = 0; i < 4096; i++) {
        memory[i] = 0;
    }

    // Store font set in memory between 0x050 and 0x09f (80 bytes)
    for (int i = 0; i < 80; i++) {
        memory[i + 0x050] = font[i];
    }
}

uint16_t Memory::getProgramCounter() {
    // Return the program counter
    return pc;
}

void Memory::setProgramCounter(uint16_t pc) {
    // Set the program counter
    this->pc = pc;
}

void Memory::pushStack(uint16_t value) {
    // Push a value onto the stack
    stack[sp] = value;
    sp++;
}

uint16_t Memory::popStack() {
    // Pop a value off the stack
    sp--;
    return stack[sp];
}


uint8_t Memory::Read(uint16_t address) {
    // Read a byte from memory at the specified address
    return memory[address];
}

// Write a byte to memory at the specified address
void Memory::Write(uint16_t address, uint8_t data) {
    // Write a byte to memory at the specified address
    memory[address] = data;
}

// Write a block of data to memory at the specified address
void Memory::WriteBlock(uint16_t address, uint8_t* data, uint16_t length) {
    // Write a block of data to memory at the specified address
    for (int i = 0; i < length; i++) {
        this->Write(address + i, data[i]);
    }
}
