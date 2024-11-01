#include <stdio.h>

void anotherFunction(char *s) {
    printf(s, 10, 34, s);
}

int main() {
    /*
        this is a pointless comment
    */
    char *s = "#include <stdio.h>%1$c%1$cvoid anotherFunction(char *s) {%1$c    printf(s, 10, 34, s);%1$c}%1$c%1$cint main() {%1$c    /*%1$c        this is a pointless comment%1$c    */%1$c    char *s = %2$c%3$s%2$c;%1$c    anotherFunction(s);%1$c    return 0;%1$c}%1$c%1$c/*%1$c    this is another pointless comment%1$c*/";
    anotherFunction(s);
    return 0;
}

/*
    this is another pointless comment
*/