#include <stdio.h>

int main () {
    int c;

    while((c = getchar()) != EOF) {
        c = getchar();
        if(c == EOF) {
            printf("EOF: %d", EOF);
            break;
        }
    }

    return 0;
}