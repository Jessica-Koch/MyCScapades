#include <stdio.h>

#define NEWLINE 0
#define OTHER 1

int main() {
    int c, prev;

    while(((c = getchar() ) != EOF)) {
        if(prev != NEWLINE) {
            putschar(c);
            prev = c;
        if(c == NEWLINE) {
            prev = NEWLINE;
            putschar(c);
        }
            if(c == ' ' || '\t') {
                c = '\n';
                putschar(c);
                prev = OTHER;
            }
        }
    }
}