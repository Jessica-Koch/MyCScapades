#include <stdio.h>
#include "totaller.h"

int main()
{
    float val;

    printf("Price of item: ");

    while (scanf("%f", &val) == 1)
    {
        // %.2f formats a float to be two decimal places
        printf("Total so far: %.2f\n", add_with_tax(val));
        printf("Price of item: ");
    }

    printf("\nFinal total: %.2f\n", total);

    // %hi is used to format shorts
    printf("Number of items: %hi\n", count);
    return 0;
}