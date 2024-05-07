//
//#define CODE "#include <stdio.h> %1$c%1$c #define CODE %c%s%c ; %1$c #define WRITE_TO_FILE() FILE *f = fopen(%cGrace_kid.c%c, %cw%c); fprintf(f, CODE, 10, 34, CODE, 34, 10, 34, 34, 34, 34); fclose(f); %1$c/*This is a quine*/%1$c WRITE_TO_FILE();";
//#define FILE *f = fopen("Grace_kid.c", "w"); fprintf(f, CODE, 10, 34, CODE, 34, 10, 34, 34, 34, 34); fclose(f);
///*This is a quine*/
//WRITE_TO_FILE();

// %1$c: Represents a newline character (\n). 
// It's commonly used to insert line breaks in the source code.

//%2$c: Represents a double quote character ("). 
//It's used to insert double quotes in the source code.

//%3$s: Represents a string. 
//It's used to insert a string variable or literal in the source code.

// %4$d: Represents a decimal integer. 
// It's used to insert an integer variable or literal in the source code.

//so the numbers in fprinf are basically the ascii number of the placeholder it's holding. So 10 is \n and 34 is "
#include <stdio.h>

#define OPEN_FILE FILE *f = fopen("Grace_kid.c", "w");
#define WRITE_CODE fprintf(f, CODE, 10, 34, CODE, 34, 10); fclose(f);
#define CODE "#include <stdio.h>%c#define OPEN_FILE FILE *f = fopen(%cGrace_kid.c%c, %cw%c);%c#define WRITE_CODE fprintf(f, CODE, 10, 34, CODE, 34, 10); fclose(f);%c#define CODE %c%s%c%c/* This is the only comment in the program */%c__attribute__((constructor)) void init() {OPEN_FILE WRITE_CODE}%c"

/* This is the only comment in the program */
__attribute__((constructor))
void init() {
    OPEN_FILE
    WRITE_CODE
}
