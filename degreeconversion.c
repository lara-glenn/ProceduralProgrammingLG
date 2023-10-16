
#include <stdio.h>

int main(){

    int degrees;
    float farenheit;
    

    printf("What is the temperature in degrees?");
    scanf("%d", &degrees);
    printf("%d\n", degrees);
    
    //degrees to farenheit
    farenheit = ((9/5) * degrees + 32);
    printf("%.2f\n", farenheit);

    return 0;


    return 0;
}