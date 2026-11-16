CC := gcc
CPPFLAGS := -Iinclude
LDFLAGS :=

SRC := main.o
ASMSRC := syscall.o
TARGET := app #Make sure the second line of .gitignore matches the contents of TARGET

SRCDIR := src/
BUILDDIR := build/

all: $(TARGET)

$(addprefix $(BUILDDIR), $(SRC)): $(BUILDDIR)%.o: $(SRCDIR)%.c
	@echo "Compiling $<"
	mkdir -p $(dir $@)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

$(addprefix $(BUILDDIR), $(ASMSRC)): $(BUILDDIR)%.o: $(SRCDIR)%.S
	@echo "Compiling $<"
	mkdir -p $(dir $@)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

$(TARGET): $(addprefix $(BUILDDIR), $(SRC)) $(addprefix $(BUILDDIR), $(ASMSRC))
	$(CC) $^ -o $@ $(LDFLAGS)


clean:
	rm -f $(TARGET)
	rm -rf build/ 
