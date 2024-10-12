#include <stdio.h>
#include <unistd.h>

int num = 5;

#define CODE "#include <stdio.h>%1$c#include <unistd.h>%1$c%1$cint num = %2$d;%1$c%1$c#define CODE %3$c%4$s%3$c%1$c%1$cint main() {%1$c    char filename[20];%1$c    sprintf(filename, %3$cSully_%%d.c%3$c, num);%1$c    int check = access(filename, F_OK);%1$c    if (check == 0){%1$c        while (check == 0) {%1$c            if (num <= 0)%1$c                break;%1$c            num--;%1$c            sprintf(filename, %3$cSully_%%d.c%3$c, num);%1$c            check = access(filename, F_OK);%1$c        }%1$c     }%1$c    FILE *fd = fopen(filename, %3$cw%3$c);%1$c    fprintf(fd, CODE, 10, 5, 34, CODE);%1$c    fclose(fd);%1$c    return 0;%1$c}%1$c"

int main() {
    char filename[20];
    sprintf(filename, "Sully_%d.c", num);
    int check = access(filename, F_OK);
    if (check == 0){
        while (check == 0) {
            if (num <= 0)
                break;
            num--;
            sprintf(filename, "Sully_%d.c", num);
            check = access(filename, F_OK);
        }
     }
    FILE *fd = fopen(filename, "w");
    fprintf(fd, CODE, 10, 5, 34, CODE);
    fclose(fd);
    return 0;
}
