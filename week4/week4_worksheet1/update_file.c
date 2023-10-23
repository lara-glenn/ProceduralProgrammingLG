
#include <stdio.h>
#include <stdlib.h>
#include "utils2.h"


int main(){
    float num;
    float total;
    float average;
    char str[20];

    char *filename = "numbers.dat";
    FILE *file = open_file(filename, "w");

    printf("Enter numbers:");

    for (int i = 0; i < 3; i++){
        scanf("%f", &num);
        total = total + num;

        fprintf(file, "%f\n", num );
        //printf("%f\n", total);


    }

    fclose(file);

    //have to change name from file - appendfile or would get a redefinition error

    FILE *appendfile = open_file(filename, "a");

    average = total/3;
    //average = atof(str);
    //printf("%.2f\n", average);

    fprintf(file, "%f\n", average);








    return 0;
}