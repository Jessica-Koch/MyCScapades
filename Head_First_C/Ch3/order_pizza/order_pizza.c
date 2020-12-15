#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char *delivery = "";
    int thick = 0;
    int count = 0;
    char ch;

    while ((ch = getopt(argc, argv, "d:t")) != EOF)
    {
        switch (ch)
        {
        case 'd':
            delivery = optarg;
            break;
        case 't':
            thick = 1; // setting something to 1 is the equivalent of setting it to true
            break;
        default:
            fprintf(stderr, "Unknown option: '%s\n'", optarg);
            return 1;
        }
    }

    argc -= optind;
    argv += optind;

    if (thick)
    {
        puts("Thick crust");
    }
    if (delivery[0])
    {
        printf("To be delivered %s.\n", delivery);
    }

    puts("Ingredients:");

    // after processing the options, the first ingredient is argv[0]
    for (count = 0; count < argc; count++)
    {
        puts(argv[count]);
    }

    return 0;
}