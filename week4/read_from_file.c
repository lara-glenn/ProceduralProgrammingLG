#include <stdio.h>
//need this to use atoi
#include <stdlib.h>

int main() {
    char* filename = "data.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }


// num of characters which will be read per line
    int buffer_size = 100;
    // a string which will hold each line as it's read in 
    char line_buffer[buffer_size];

    //creating array of integers 1000 lines long - define in coursework use 1000
    int numbers[1000];

    int num_lines = 0;

// while there is still data in the file - fgets reads into 'line_buffer' up to 100 characters
//if it gets to null it is at the end of the file 
//fgets reads in a line 
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        //printf("%s\n", line_buffer);

        printf("%d\n", atoi(line_buffer));
        //stores into an array
        numbers[num_lines] = atoi(line_buffer);
        num_lines++;
    }

    printf("There were %d lines\n", num_lines);

    fclose(file);
    return 0;
}