#include <stdio.h>

int num = 5; 

#define CODE "#include <stdio.h>%1$c%1$cint num = %2$d;%1$c#define CODE %2$c%3$s%2$c%1$c%1$cint main() {%1$c    if (num > 0) {%1$c        num--; %1$c        char filename[20];%1$c        sprintf(filename, %2$cSully_%d.c%2$c, num);%1$c        FILE *fd = fopen(filename, %2$cw%2$c);%1$c        fprintf(fd, CODE, 10, 34, CODE, 34);%1$c        fclose(fd);%1$c    }%1$c    return (0);%1$c}%1$c"

int main() {
    if (num >= 0) {
        num--;
        char filename[20];
        sprintf(filename, "Sully_%d.c", num);
        FILE *fd = fopen(filename, "w");
        if (fd) {
            fprintf(fd, CODE, 10, 34, num, 34, CODE);
            fclose(fd);
        } else {
            perror("Error opening file");
        }
    }
    return 0;
}
