
#include <stdio.h>
#include "utils2.h"

int main(){

    int square_arr[15];
    int i=1;
    int number = 1;
    int n;
    int square;

    char *filename = "squares.dat";r
    FILE *file = fopen(filename, "w");


    printf("Choose n:");
    scanf("%d", &n);
    
     for (i=1; i<=n; i++)
    {
        square = number * number;
        square_arr[i] = square;
        fprintf(file, "%d\n", square_arr[i]);
        number += 1;

    }


    //fclose(file);

    return 0;
}