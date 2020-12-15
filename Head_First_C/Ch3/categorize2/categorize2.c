#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char line[80];
    FILE *in;

    if (!(in = fopen(argv[0], "r"))) // checking to see if the file exists
    {
        fprintf(stderr, "Can't open the file.\n");
        return 1;
    }

    if (argc != 6)
    {
        fprintf(stderr, "You need to give 5 arguments\n");
        return 1; // return 1 if there is an error
    }
    FILE *in = fopen("spooky.csv", "r");

    FILE *file1 = fopen(argv[2], "w");
    FILE *file2 = fopen(argv[4], "w");
    FILE *file3 = fopen(argv[5], "w");

    while (fscanf(in, "%79[^\n]\n", line) == 1)
    {
        if (strstr(line, argv[1]))
        {
            fprintf(file1, "%s\n", line);
        }
        else if (strstr(line, argv[3]))
        {
            fprintf(file2, "%s\n", line);
        }
        else
        {
            fprintf(file3, "%s\n", line);
        }
    }

    fclose(file1);
    fclose(file2);
    fclose(file3);
    fclose(in);

    return 0;
}