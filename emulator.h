#ifndef EMULATOR_H
#define EMULATOR_H

#include "cpu.h"
#include "memory.h"
#include "graphics.h"
#include <string>

class Emulator {
public:
    Emulator();
    void LoadROM(const std::string& rom_path);
    void Run();

private:
    CPU cpu_;
    Memory memory_;
    Graphics graphics_;
};

#endif
