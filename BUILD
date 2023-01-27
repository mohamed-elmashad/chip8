cc_library(
    name = "emulator",
    srcs = [        "emulator.cc",        "cpu.cc",        "memory.cc",        "graphics.cc",    ],
    hdrs = [        "emulator.h",        "cpu.h",        "memory.h",        "graphics.h",    ],
    # deps = [        "//third_party/sdl:sdl",    ],
)

cc_binary(
    name = "chip8",
    srcs = ["main.cc"],
    deps = [":emulator"],
)

