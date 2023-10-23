
#include <stdio.h>
#include <stdlib.h>

#include "utils2.h"

int main(){
    
    char* filename = "squares.dat";
    FILE *file = open_file(filename, "r");

    float average;
    int i = 0;
    int total = 0;
    int buffer_size = 100;
    char line_buffer[buffer_size];
    int num_lines = 0;

    while (fgets(line_buffer, buffer_size, file) != NULL){
        printf("%s", line_buffer);
        total = total + atoi(line_buffer);
        num_lines++;
        
    }

    fclose(file);

    

    


    average = total/num_lines;
    printf("%.2f", average);  


    return 0;
}