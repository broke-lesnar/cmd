# === Compiler ===
CC = gcc

# === Common flags ===
INCLUDES = -Iinclude
CFLAGS = -Wall -Wextra -std=c11 $(INCLUDES)

# === Directories ===
SRC_DIR = src
BIN_DIR = bin
INC_DIR = include

# === Files ===
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(patsubst $(SRC_DIR)/%.c,$(BIN_DIR)/%.o,$(SRCS))

# === Output binaries ===
DEBUG_TARGET = $(BIN_DIR)/main_debug
RELEASE_TARGET = $(BIN_DIR)/main_release

# === Targets ===
all: release

debug: CFLAGS += -g -O0
debug: $(DEBUG_TARGET)

release: CFLAGS += -O2
release: $(RELEASE_TARGET)

# === Linking ===
$(DEBUG_TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(RELEASE_TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# === Object file compilation ===
$(BIN_DIR)/%.o: $(SRC_DIR)/%.c | $(BIN_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# === Ensure bin dir exists ===
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# === Clean build artifacts ===
clean:
	rm -rf $(BIN_DIR)

.PHONY: all debug release clean

run-debug: debug
	./$(DEBUG_TARGET)

run-release: release
	./$(RELEASE_TARGET)
