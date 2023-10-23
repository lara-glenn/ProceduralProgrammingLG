
#include <stdio.h>

int main(){

    int a;
    int stoppingcase = -1;

    while (a != stoppingcase) {

        printf("Enter number");
        scanf("%d", &a);

        if (a == stoppingcase) {
            printf("You have stopped the loop\n");
            break;
        }


    }

    return 0;
}