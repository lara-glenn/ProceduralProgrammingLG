
#include <stdio.h>

int main(){

    float principal;
    float rate;
    float interest;
    float decimalr;
    float calc;
    int time;

    printf("Enter principal:");
    scanf("%f", &principal);

    printf("Enter rate:");
    scanf("%f", &rate);

    printf("Enter time:");
    scanf("%d", &time);

    decimalr = rate/100;

    calc = principal*(1 + (decimalr * time));
    printf("Simple interest: $%.2f", calc);





   
    return 0;
}