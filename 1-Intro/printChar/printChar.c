#include <stdio.h>

int main() {
    int c;
  puts ("Enter text. Include a dot ('.') in a sentence to exit:");

  while ((c = getchar()) != EOF)
  {
      putchar(c);
  }
}