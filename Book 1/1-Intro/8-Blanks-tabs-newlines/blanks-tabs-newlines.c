#include <stdio.h>

int main() {
    int c, tabs, blanks, newLines;

    tabs = blanks = newLines = 0;

    while((c = getchar()) != EOF) {
        if(c == '\t') {
            tabs = tabs + 1;
        }
        else if(c == '\n') {
            newLines = newLines + 1;
        }
        else if(c == ' ') {
            blanks = blanks + 1;
        }
        
    }
    printf("blanks%d\ttabs%d\tnew lines%d", blanks, tabs, newLines);
}