#include <stdio.h>

int main(){

    int array[5]  = {1,50,34,80,5};
    int i;
    int max = array[0];
    

    for (i=1; i < 5; i++){
        if (array[i]>max)
            max = array[i];


    }

    printf("The max element is %d", max);



    return 0;
}