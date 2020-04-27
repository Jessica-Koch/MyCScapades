#include <stdio.h>

int main () {
    int c, prev;

    while((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
        } else {
            if(prev != ' ') {
                putchar(c);
            }
        }
        prev = c;
    }
    return 0;
}