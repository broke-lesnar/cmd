### A lightweight bash (putting the "fun" in weekend)

Build Requirements:

- GNU GCC compiler with C11 support (tested with gcc 5.0+)
- POSIX-compliant operating system (Linux, macOS, BSD)
- Standard C library

The Makefile uses:

- Strict compiler warnings (`-Wall -Wextra`)
- Debug builds with symbols (`-g`) and no optimization (`-O0`)
- Release builds with optimization level 2 (`-O2`)

Useful commands:

- To build the debug version, run `make debug`
- To build the release version, run `make release`
- To build and run debug version, run `make run-debug`
- To build and run release version, run `make run-release`
- Last but not least, run `make clean` to clean stuff up
