#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int num = 5;

#define CODE "#include <stdio.h>%1$c#include <unistd.h>%1$c#include <stdlib.h>%1$c%1$cint num = %2$d;%1$c%1$c#define CODE %3$c%4$s%3$c%1$c%1$cint main() {%1$c    char filename[20];%1$c    sprintf(filename, %3$cSully_%%d.c%3$c, num);%1$c%1$c    int check = access(filename, F_OK);%1$c    if (check == 0){%1$c        while (check == 0) {%1$c            if (num <= 0)%1$c                return (0);%1$c            num--;%1$c            sprintf(filename, %3$cSully_%%d.c%3$c, num);%1$c            check = access(filename, F_OK);%1$c        }%1$c     }%1$c%1$c    FILE *fd = fopen(filename, %3$cw%3$c);%1$c    fprintf(fd, CODE, 10, num, 34, CODE);%1$c    fclose(fd);%1$c%1$c    char cmd[100];%1$c    char executable[20];%1$c    sprintf(executable, %3$c./Sully_%%d%3$c, num);%1$c    sprintf(cmd, %3$cgcc %%s -o %%s%3$c, filename, executable);%1$c    int compile_status = system(cmd);%1$c    if (compile_status != 0) {%1$c        printf(%3$cCompilation failed!%3$c);%1$c        return 1;%1$c    }%1$c%1$c    int execute_status = system(executable);%1$c    if (execute_status != 0) {%1$c        printf(%3$cExecution failed!%3$c);%1$c        return 1;%1$c    }%1$c    return 0;%1$c}"

int main() {
    char filename[20];
    sprintf(filename, "Sully_%d.c", num);

    int check = access(filename, F_OK);
    if (check == 0){
        while (check == 0) {
            if (num <= 0)
                return (0);
            num--;
            sprintf(filename, "Sully_%d.c", num);
            check = access(filename, F_OK);
        }
     }

    FILE *fd = fopen(filename, "w");
    fprintf(fd, CODE, 10, num, 34, CODE);
    fclose(fd);

    char cmd[100];
    char executable[20];
    sprintf(executable, "./Sully_%d", num);
    sprintf(cmd, "gcc %s -o %s", filename, executable);
    int compile_status = system(cmd);
    if (compile_status != 0) {
        printf("Compilation failed!");
        return 1;
    }

    int execute_status = system(executable);
    if (execute_status != 0) {
        printf("Execution failed!");
        return 1;
    }
    return 0;
}