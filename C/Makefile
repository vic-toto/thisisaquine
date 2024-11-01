# Define the source files
SOURCES = Colleen.c Grace.c Sully.c

# Define the executables
EXECUTABLES = Colleen Grace Sully

# Compiler
CC = clang
CFLAGS = -Wall -Wextra -Werror

# Default target
all: $(EXECUTABLES)

# Rule to build each executable
Colleen: Colleen.c
	$(CC) $(CFLAGS) Colleen.c -o Colleen

Grace: Grace.c
	$(CC) $(CFLAGS) Grace.c -o Grace

Sully: Sully.c
	$(CC) $(CFLAGS) Sully.c -o Sully

# Rebuild all executables
re: fclean all

# Clean target (remove executables)
clean:
	rm -f $(EXECUTABLES)

# Force clean (remove executables)
fclean: clean

.PHONY: all clean fclean re Colleen Grace Sully
