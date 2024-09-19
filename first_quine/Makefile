CC = clang
ASM = nasm
CFLAGS = -Wall -Wextra -Werror
ASMFLAGS = -f elf64
C_EXECUTABLE = Colleen_c
ASM_EXECUTABLE = Colleen_asm

.PHONY: all clean fclean re c_quine asm_quine

all: c_quine asm_quine

c_quine:
	$(CC) $(CFLAGS) -o $(C_EXECUTABLE) quine.c

asm_quine:
	$(ASM) $(ASMFLAGS) -o Colleen.o quine.asm
	$(CC) -o $(ASM_EXECUTABLE) Colleen.o

clean:
	@rm -f *.o $(C_EXECUTABLE) $(ASM_EXECUTABLE)

fclean: clean
	@rm -f $(C_EXECUTABLE) $(ASM_EXECUTABLE)

re: fclean all
