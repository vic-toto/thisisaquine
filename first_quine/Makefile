CC = clang
ASM = nasm
CFLAGS = -Wall -Wextra -Werror
ASMFLAGS = -f elf64
EXECUTABLE = Colleen

.PHONY: all clean fclean re c_quine asm_quine

all: c_quine asm_quine

c_quine:
	$(CC) $(CFLAGS) -o $(EXECUTABLE) quine.c

asm_quine:
	$(ASM) $(ASMFLAGS) -o Colleen.o quine.asm
	$(CC) -o $(EXECUTABLE) Colleen.o

clean:
	@rm -f *.o $(EXECUTABLE)

fclean: clean
	@rm -f $(EXECUTABLE)

re: fclean all

