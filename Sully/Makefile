CC = clang
CFLAGS = -Wall -Wextra -Werror

# Default target
all: Sully

Sully: quine.c
	$(CC) $(CFLAGS) -o $@ $<

run: Sully
	./Sully

# Clean rule to remove generated files
clean:
	rm -f Sully Sully_*.c

.PHONY: all run clean
