#include <stdio.h>

int main(){

    int a = 2;
    int b = 4;
    int temp;
    //temp = ''
    printf("%d %d\n", a, b);
   
    // temp stores 2
    temp = a;
    // value of a is now 4
    a = b;
    //value of b is now 2
    b = temp;

    printf("%d %d\n", a, b);

    
    


    return 0;
}