
#include <stdio.h>

int main(){

    int temp;

    printf("Enter temperature:");
    scanf("%d", &temp);

    if (temp >= -10 && temp <= 40) {

        printf("The temperature %d is within the valid range of -10 to 60 degrees\n", temp);
    }
    else {
        printf("Temperature is not in the valid range\n");
    }

    return 0;
}