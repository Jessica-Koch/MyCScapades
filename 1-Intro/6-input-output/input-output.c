#include <stdio.h>

int main(void)
{
  printf("Press a key. ENTER would be nice :-)\n\n");
  printf("The expression getchar() != EOF evaluates to %d\n", getchar() != EOF);
  return 0;
}
