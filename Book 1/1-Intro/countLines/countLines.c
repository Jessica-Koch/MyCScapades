#include <stdio.h>

int main() {
    int c, nl;
    FILE * pFile;

    nl = 0;

    pFile = fopen ("boop.txt","w");
    
    if (pFile!=NULL) {
        fputs ("fopen example",pFile);
        
        while((c = getchar()) != EOF) {
            if(c == '\n') {
                ++nl;
            }
        }   
        
        printf("%d\n", nl);
        fclose(pFile);

    } else {
        printf("Could not find file");
    }
    return 0;
}