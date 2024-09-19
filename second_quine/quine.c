#include <stdio.h>

#define OPEN_FILE FILE *fd = fopen("Grace_kid.c", "w");
#define CODE "#include <stdio.h>%1$c%1$c#define OPEN_FILE FILE *fd = fopen(%2$cGrace_kid.c%2$c, %2$cw%2$c);%1$c#define CODE %2$c%3$s%2$c%1$c#define WRITE_CODE fprintf(fd, CODE, 10, 34, CODE, 34); fclose(fd);%1$c/* This is a quine */%1$c__attribute__((constructor)) void init() { OPEN_FILE; WRITE_CODE; }%1$c"
#define WRITE_CODE fprintf(fd, CODE, 10, 34, CODE); fclose(fd);

/* This is a quine */
__attribute__((constructor))
void init() {
    OPEN_FILE;
    WRITE_CODE;
}

// %1$c: Represents a newline character (\n). 
// It's commonly used to insert line breaks in the source code.

//%2$c: Represents a double quote character ("). 
//It's used to insert double quotes in the source code.

//%3$s: Represents a string. 
//It's used to insert a string variable or literal in the source code.

// %4$d: Represents a decimal integer. 
// It's used to insert an integer variable or literal in the source code.

//quick ASCII 
// 10 new line , 34 double quotes