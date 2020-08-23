#include <stdio.h>

int fToC(int fahr);
int fToCRange(int upper, int lower, int step);

main() {
    printf("%3d", ftC(5.0));
}

int fToC(int fahr) {
    return ((5.0 / 9.0) * (fahr - 32));
}

int fToCRange(int upper, int lower, int step) {
    int fahr;
    for (fahr = upper; fahr >= lower; fahr = fahr - step) {
        ftC(fahr);
    }

    return 0;
}