#include <stdio.h>

int main()
{
    int c, i;

    c = getchar();

    while (c != EOF) {

        putchar(c);

        c = getchar();

      if(c == EOF) {
        printf("done");
        putchar(c);
        printf(EOF == 0 ? "EOF == 0" : "EOF != 0");
        printf("\n");
        printf(EOF == 1 ? "EOF == 1" : "EOF != 1");
      }
    }
}