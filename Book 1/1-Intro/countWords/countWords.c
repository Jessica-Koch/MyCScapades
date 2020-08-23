#include <stdio.h>

#define IN 1
#define OUT 0

main() {
    int c, newLine, newWord, newChar, state;
    
    newLine = newWord = newChar = 0;

    state = OUT;
    
    while((c = getchar())!= EOF) {
        ++newChar;

        if(c == '\n') {
            ++newLine;
        }
        if(c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if(state == OUT) {
            state = IN;
            ++newWord;
        }
    }
    printf("%d %d %d\n", newLine, newWord, newChar);        
}