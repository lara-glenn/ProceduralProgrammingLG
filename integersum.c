
#include <stdio.h>

int main(){

    int num1;
    int num2;
    int result;

    printf("Enter first number:");
    scanf("%d", &num1);

    printf("Enter second number:");
    scanf("%d", &num2);

    //can also do:
    //printf("Enter two numbers");
    //scanf("%d %d", &num1, &num2);
    //int num3 = num1 + num2;
    result = num1 + num2;

    printf("The result is %d\n", result);




    return 0;
}