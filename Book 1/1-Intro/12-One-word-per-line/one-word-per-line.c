#include <stdio.h>

#define NEWLINE 0
#define OTHER 1

int main() {
    int c, prev;

    while(((c = getchar() ) != EOF)) {
        if(prev != NEWLINE) {
            putchar(c);
            prev = c;
        if(c == NEWLINE) {
            prev = NEWLINE;
            putchar(c);
        }
            if(c == ' ' || c == '\t') {
                c = '\n';
                putchar(c);
                prev = OTHER;
            }
        }
    }
}