
#include <stdio.h>

int main(){

    float days;
    float distance;

    printf("Enter the number of days:");
    scanf("%f", &days);

    //distance that light travels a day = 2.590×1010 km

    distance = days * 25900000000;

    printf("%.3f km \n ", distance);



    return 0;
}