#include <stdio.h>

#define NEWLINE 0
#define OTHER 1

main() {
    int c, prev;

    prev = OTHER;

    while((c = getchar()) != EOF) {
        if(prev != NEWLINE) {
            if(c == '\n') {
                prev = NEWLINE;
                putchar(c);
            }
            if(c == ' ' || '\t' ) {
                c = '\n';
                putchar(c);
                prev = OTHER;
            }
        }
    }
}