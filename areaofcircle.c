#include <stdio.h>

int main(){

    int radius;
    float pi;
    float area;

    pi = 3.14;

    printf("Enter radius");
    scanf("%d", &radius);


    printf("The radius is %.2f", pi * radius * radius);

    return 0;
}