
#include <stdio.h>

int main(){

    int choice;

    printf("You can select from 5 options from the menu\n");
    printf("Choose 1 for Burger, 2 for Pizza, 3 for Chips, 4 for Sandwich and 5 for drink\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: printf("You have chosen Burger\n");
        break;

        case 2: printf("You have chosen Pizza\n");
        break;

        case 3: printf("You have chosen Chips\n");
        break;

        case 4: printf("You have chosen Sandwich\n");
        break;

        case 5: printf("You have chosen Drink\n");
        break;

        default: printf("That is not a valid menu option");
    }

    return 0;
}