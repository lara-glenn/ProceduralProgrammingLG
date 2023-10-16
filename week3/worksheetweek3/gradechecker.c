
#include <stdio.h>

int main(){

    int grade;

    printf("Enter grade");
    scanf("%d", &grade);

    if (grade >= 0 && grade <= 100){

        if (grade >= 70 && grade <= 100) {
            printf("The grade %d is a distinction", grade);
        }

        else if (grade >= 50 && grade < 70) {
            printf("The grade %d is a pass", grade);
        }
        else {
            printf("The grade %d is a fail", grade);
        }
    }
    return 0;
}