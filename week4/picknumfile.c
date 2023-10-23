#include <stdio.h>

int main()
{
    int array[15];
    int i=0;
    int total = 0;
    float mean;
    int lines;

    char *filename = "picknum.txt";
    FILE *file = fopen(filename, "w");
    if (file == NULL){
        printf("Error opening file\n");
        return 1;

    }

    printf("How many lines?");
    scanf("%d", &lines);
    
     for (i=0; i<lines; i++)
    {
        printf("\nEnter a number:");
        scanf("%d", &array[i]);
        fprintf(file, "%d\n", array[i]);
        total += array[i];

    }

    mean = total/10;
    fprintf(file, "%.2f\n", mean);

    fclose(file);

    return 0;
}