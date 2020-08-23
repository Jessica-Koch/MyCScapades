#include <stdio.h>

#define MAX_LINE_LENGTH 10// max input line size


int getLine(char characters[], int maxLineLength);
void copy(char newArr[], char originalArr[]);

// print the longest input line;
int main() {
    FILE * pFile;
    int currentLength; // current line length
    int max; // maximum length seen so far
    char currentInputLine[MAX_LINE_LENGTH]; // current input line
    char longestLine[MAX_LINE_LENGTH]; // longest line
    
    pFile = fopen ("text.txt","r+");
    
    if (pFile!=NULL) {
        fputs ("fopen example",pFile);

        max = 0;
        while((currentLength = getLine(currentInputLine, MAX_LINE_LENGTH)) > 0) {
            printf("in while");
            if(currentLength > max) {
                max = currentLength;

                copy(longestLine, currentInputLine);
            }
        }

        if(max > 0) { // there was a line with contents
            printf("%s", longestLine);
        }

        fclose(pFile);
    }
    else {
        printf("Could not find file");
    }
    return 0;
}

// read a line into characters, 
// return length
int getLine(char textCharacters[], int limit) {
    int c, i;

    // iterate through array either:
    // 1. the amount of times defined in MAX_LINE_LENGTH or
    // 2. the end of file is reached
    // 3. or a new line character is encountered
    // copy that character value onto the index of the inputArray
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        textCharacters[i] = c;
    } 

    // if the character is a new line, add it to the character array
    // increment the index (we still need to add the \0 at the end)
    if(c == '\n') {
        textCharacters[i] = c;
        ++i;
    }   

    // append the null value to the end of the string and 
    // return the index(length)
    textCharacters[i] = '\0';
    return i;
}

// copy from point A to point B
void copy(char to[], char from []) {
    int i;
    printf("in copy fn");
    i = 0;
    
    // while we aren't at the end of the input, keep copying
    
    while((to[i] = from[i]) != '\0') {
        ++i;
    }
}