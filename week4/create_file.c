#include <stdio.h>
#include "utils.h"

int main () {
    //string filename which has data.txt
    //* is a pointer
    char* filename = "data.txt";
    FILE *file = open_file(filename, "w");
    //w - writing to this file 
    //FILE *file = fopen (filename, "w"); // or "a", "w+", "a+"
    //if (file == NULL) {
        //printf("Error opening file\n");
        //retunr 1 when there are errors
        //return 1;
    //}

    fprintf(file, "Hello World!!\n");

    fclose(file);
    //return code when there are no error
    return 0;
}