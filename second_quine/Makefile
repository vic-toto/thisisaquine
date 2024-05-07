CC = clang            # Define the compiler to use
CFLAGS = -Wall -Wextra -O2  # Compilation flags: Enable all warnings and optimize code

# Default target
all: Grace

# Rule to build the Grace executable
Grace: quine.c
	$(CC) $(CFLAGS) -o $@ $<

# Rule to run the program which will generate Grace_kid.c
run: Grace
	./Grace

# Clean rule to remove generated files
clean:
	rm -f Grace Grace_kid.c Grace_kid.s

.PHONY: all run clean
