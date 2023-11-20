#include <stdio.h>
#include "utils.h"

int main(){

    char line[100];
    //created array of integers
    int nums[200];
    int counter=0;
    int num_over_1000=0;

    char* filename = "input.txt";
    FILE *file = open_file(filename, "r");



    while (fgets(line, 100, file) != NULL){
        printf("%s", line);
        //convert to integer
        nums[counter] = atoi(line);
        printf("%d\n", nums[counter]);
        if(nums[counter]>1000){
            num_over_1000++;
        }
        counter++;
    }

    fclose(file);
    printf("%d\n", num_over_1000);


    return 0;
}