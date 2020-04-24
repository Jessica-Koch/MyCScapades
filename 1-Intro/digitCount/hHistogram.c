#include <stdio.h>

main() {
    int c, wordLength;
    while ((c = getchar())!= EOF) {
        if(c == ' ' || c == '\t' || c == '\b' || c == '\n') {
            putchar('\n');
        }
        else {
            putchar('-');
        }
    }
}