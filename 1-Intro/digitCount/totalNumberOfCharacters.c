#include <stdio.h>

#define MAX_CHARS 128

main() {
    int c, i, j;
    c = i = j = 0;

    int character[MAX_CHARS];

    for (i = 0; i < MAX_CHARS; ++i) {
        character[i] = 0;
    }

    while((c = getchar()) != EOF) {
        ++character[c];
    }

    for (i = 0; i <= MAX_CHARS; ++i) {
        putchar(i);
        for (j = 0; j < character[i]; ++i) {
            putchar('*');
        }
        putchar('\n');
    }
}