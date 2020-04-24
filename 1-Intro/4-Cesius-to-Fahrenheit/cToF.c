#include <stdio.h>

int main() {
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 100;
    step = 5;

    celcius = lower;
    printf("  C\t  F \n");
    while(celcius <= upper) {
        fahr = celcius * (9.0/5.0) + 32;
        printf("%3.0f\t%6.1f\n", celcius, fahr);
        celcius = celcius + step;
    }
    
    return 0;
}