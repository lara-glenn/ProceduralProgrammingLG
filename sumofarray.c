
#include <stdio.h>
int main(){

    int array[5] = {1,2,3,4,5}, sum, i; 

    for (i=0; i < 5; i++){
        sum += array[i];
    }

    printf("%d", sum);

    return 0;

}