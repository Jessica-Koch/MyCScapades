#include <stdio.h>

float cToF(float celsius);
int rangeCToF(int upper, int lower, int step, float celsius);

main()
{

    printf("%3.0f\t", cToF(5.0));
}

float cToF(float celsius) {
    return celsius * (9.0 / 5.0) + 32;
}

int rangeCToF(int upper, int lower, int step, float celsius) {
    for (celsius = upper; celsius >= lower; celsius = celsius - step) {
        cToF(celsius);
    }
    return 0;
}