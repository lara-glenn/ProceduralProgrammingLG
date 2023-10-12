#include <stdio.h>

int main() {
    int a;
    // a starts at 0 (starting condition), a++ increments value of a by one each time
    // ; not needed at the end of the first line of for loop
    //to go up in 2, write a+=2
    for (a = 0; a < 10; a++)
    {
        printf ("a is equal to %d\n", a);
    }
    printf ("I've finished the loop and a is equal to %d\n", a);

    return (0);
}