#include "print_reverse.h"
#include <stdio.h>
#include <string.h>

void print_reverse(char *s)
{
    //size_t is just an integer used to store the
    // size of things
    size_t len = strlen(s); // strlen('abc') == 3

    char *t = s + len - 1;

    while (t >= s)
    {
        printf("%c", *t);
        t = t - 1;
    }
    puts("");
};

// int main()
// {
//     print_reverse("puppies");
//     return 0;
// };