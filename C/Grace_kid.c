#include <stdio.h>

#define CODE "#include <stdio.h>%1$c%1$c#define CODE %2$c%3$s%2$c%1$c#define WRITE_FILE FILE *fd = fopen(%2$cGrace_kid.c%2$c, %2$cw%2$c); fprintf(fd, CODE, 10, 34, CODE); fclose(fd)%1$c%1$c/*%1$c    This is a useless comment that made me fail last time%1$c*/%1$c%1$c#define EXECUTE() int main (void){WRITE_FILE; return 0;}%1$c%1$cEXECUTE()"
#define WRITE_FILE FILE *fd = fopen("Grace_kid.c", "w"); fprintf(fd, CODE, 10, 34, CODE); fclose(fd)

/*
    This is a useless comment that made me fail last time
*/

#define EXECUTE() int main (void){WRITE_FILE; return 0;}

EXECUTE()