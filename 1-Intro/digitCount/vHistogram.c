#include <stdio.h>

#define MAX_WORD_LENGTH 25
#define MAX_WORD_COUNT 25

main() {
    int c, i,j, nw, nc, max, state;

    int wordLengthArr[MAX_WORD_COUNT];
    i = j = nc = nw = 0;

    // get number of words to create array
    while((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n' || c == '\t' || c == ' ') {
            wordLengthArr[nw] = nc-1;
            nc = 0;
            ++nw;
        }
    }

    for (i = MAX_WORD_LENGTH; i >= 1; --i) {
        for (j = 0; j <= nw; ++j) {
            if(i <= wordLengthArr[j]) {;
                putchar('*');
            } else {
                putchar(' ');
            }
        }
        putchar('\n');
    }
}