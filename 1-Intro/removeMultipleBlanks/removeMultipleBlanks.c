#include <stdio.h>

int main() {
    int c, prev;

    while((c = getchar()) != EOF) {
        // character isn't a space
        if(c != ' ') {
            putchar(c);
        } else { // characer is a space
            if(prev != ' ') {
                putchar(c);
            }
        }
        prev = c;
    }
    return 0;
}