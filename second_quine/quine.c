#include <stdio.h>

#define CODE "#include <stdio.h>%1$c%1$c#define CODE %2$c%3$s%2$c%1$c#define WRITE_FILE FILE *fd = fopen(%4$cGrace_kid.c%4$c, %4$cw%4$c); fprintf(fd, CODE, 10, 34, CODE, 34); fclose(fd)%1$c%1$c/* This is a quine */%1$c%1$c#define EXECUTE() int main (void){WRITE_FILE; return 0;}%1$c%1$cEXECUTE()%1$c"
#define WRITE_FILE FILE *fd = fopen("Grace_kid.c", "w"); fprintf(fd, CODE, 10, 34, CODE, 34); fclose(fd)

/* This is a quine */

#define EXECUTE() int main (void){WRITE_FILE; return 0;}

EXECUTE()
