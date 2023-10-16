
#include <stdio.h>

int main(){
    // defines array with 5 spaces
    int array[5] = {1,2,3,4,5};
    //variable to loop through array
    int a;
    //variable used to store remainder 
    int remainder;

    //for loop that loops through every element in the array
    for (a=0; a<5; a++){
        remainder = a % 2;
        
        if (remainder == 0)
            printf("%d is an even number\n", a);
        else
            printf("%d is an odd number\n", a);

        //printf("%d\n", array[a]);
    }

    return 0;

}