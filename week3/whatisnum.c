
#include <stdio.h>

int main(){

    int num;

    printf("Enter number");
    scanf("%d", &num);

    if (num > 0) {
        printf("The number %d is a positive number\n", num);
    }
    else if (num == 0) {
        printf("The number %d is 0\n", num);
    }
    else if (num < 0) {
        printf("The number %d is a negative number\n", num);
    }

    return 0;
}