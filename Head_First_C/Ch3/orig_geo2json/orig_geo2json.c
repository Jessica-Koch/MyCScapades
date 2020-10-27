#include <stdio.h>

int main()
{
    float latitude;
    float longitude;
    char info[80];
    int started = 0;

    puts("data =[");

    // scanf takes pointers, since info is already an array, it is, by default, a pointer already
    while (scanf("%f, %f, %79[^\n]", &latitude, &longitude, info) == 3) // ^ means give every character up to the end of the line
    {
        if (started)
        {
            printf(",\n"); // displaying a comma only if we've displayed a previous line
        }
        else
        {
            started = 1; // once the loop has stgarted, you can set "started" to 1
        }
        // printf takes values and not the addresses of the numbers
        printf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, info);
    }
    puts("\n]");
    return 0;
}

// 42.363400, -71.098465,Speed = 21