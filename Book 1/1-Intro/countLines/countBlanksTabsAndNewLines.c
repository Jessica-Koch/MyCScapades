#include <stdio.h>

int main() {
    int c;
    int blanks = 0;
    int tabs = 0;
    int newLines = 0;

    while((c = getchar()) != EOF) {
        if(c == ' ') {
            ++blanks;
        }

        if(c == '\n') {
            ++newLines;
        }
        
        if(c == '\t') {
            ++tabs;
        }
    }

    printf("blanks:%dtabs:%dnew lines:%d\n", blanks, tabs, newLines);