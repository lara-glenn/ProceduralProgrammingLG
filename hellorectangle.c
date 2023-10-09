
#include <stdio.h>

int main(){

    //can also write on one line e.g. width, length, area;
    float length;
    float width;
    float rectangle;

    printf("Enter length:");

    //need the & - not for strings - for values - pointer to the value
    scanf("%f",&length);

    printf("Enter width:");
    scanf("%f",&width);

    rectangle = length*width;

    printf("The area of the rectangle is %.1f",rectangle);

    return 0;


    
}