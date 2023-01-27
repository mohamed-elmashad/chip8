cc_library(
    name = "emulator",
    srcs = [ "src/emulator.cc", "src/cpu/cpu.cc", "src/memory/memory.cc", "src/graphics/graphics.cc", ],
    hdrs = [ "src/emulator.h", "src/cpu/cpu.h", "src/memory/memory.h", "src/graphics/graphics.h", ],
    # deps = [ "//third_party/sdl:sdl", ],
)

cc_binary(
    name = "chip8",
    srcs = ["src/main.cc"],
    deps = [":emulator"],
)