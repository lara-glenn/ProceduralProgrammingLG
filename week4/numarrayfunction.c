
#include <stdio.h>

int main(){
    
    int array[10];
    int i=0;
    int total = 0;
    float mean;

    for (i=0; i<10; i++)
    {
        printf("\nEnter 10 numbers:");
        scanf("%d", &array[i]);
        total += array[i];

    }

    mean = total/10;
    //make sure to reset i
    for(i=0; i<10;i++){
        printf("%d\n", array[i]);
    }

    printf("The average is %.2f", mean);


    return 0;
}