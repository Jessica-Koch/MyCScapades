#include <stdio.h>
#include <stdlib.h>
// 
int main()
{
    char card_name[3];
    int count = 0;

    do {
        puts("Enter the card_name: ");
        // %2s means that this will be a string of 2 chars - one the user
        // enters the second is the sentinel character
        scanf("%2s", card_name);
        int val = 0;

        switch (card_name[0]) {
        case 'K':
        case 'Q':
        case 'J':
            val = 10;
            break;
        case 'A':
            val = 11;
            break;
        case 'X':
            continue;
        default:
            val = atoi(card_name);
            if((val < 1) || (val > 10)) {
                puts("I don't understand that value!");
                continue;
            }
        }
    
        // check if the value is 3 to 6
        if(val > 2 &&  val < 7) {
            count++;
        }
        if (val == 10) {
            count--;
        }
        printf("Current count: %i\n", count);
    } while (card_name[0] != 'X');

    return 0;
}