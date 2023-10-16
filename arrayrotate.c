
#include <stdio.h>

int main(){

    int array[5] = {1,2,3,4};
    int i;
    int temp = array[0];

    for (i=0; i<5; i++){
        temp = array[i];
        array[i+1] = array[i];
        array[i] = temp;
        printf("%d", array[i]);




    }

    return 0;
}