#include <stdio.h>

int main()
{
    int array [10];
    int count;

    //populate an array
    for (count = 0; count < 10 ; count++)
    {
        //* is the pointer - find whats stored there and find it from memory
        array[count] = count * 10 + count;
    }

    printf ("The first and second elements are %d and %d\n", 
    array[0], array[1]);
    printf ("Or, via pointers, %d and %d\n", *array, *(array+1));

    return 0;
}