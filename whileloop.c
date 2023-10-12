#include <stdio.h>

int main() {
    //define a variable before loop begins 
    int a = 0;

    while (a < 25)
    {
        printf ("a is equal to %d\n", a);
        //increment the counter
        a+=5;
    }
    printf ("I've finished the loop and a is equal to %d\n", a);

    return (0);
}