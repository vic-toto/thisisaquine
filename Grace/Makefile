CC = clang
CFLAGS = -Wall -Wextra -Werror

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
	rm -f Grace Grace_kid.c

.PHONY: all run clean
