#include <stdio.h>

int main()
{
    float latitude, longitude;
    char info[80];

    // scanf returns the number of values it was able to read
    // it should be 3 here, thus == 3
    while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3)
    {

        if ((latitude > 26) && (latitude < 34))
        {
            if ((longitude > -76) && (longitude < -64))
            {
                printf("%f,%f,%s\n", latitude, longitude, info);
            }
        }
    }
    return 0;
}

// Run via:
// (bermuda/out/bermuda | geo2json/out/geo2json) < bermuda/spooky.csv > bermuda/output.json