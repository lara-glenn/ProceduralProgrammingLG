
#include <stdio.h>


//function to take in the index to change, rows and prints out values before and after
//knows what column to show when colIndex is passed in
void printColumn(int a[][4], int colIndex, int rows, char when) {
    switch (when) {
        case 'B':
            printf("Values in column %d before change:\n", colIndex); break;

        case 'A':
            printf("Values in column %d after change:\n", colIndex); break;

        default: 
            printf("Invalid option\n");
            return;
    }

    for (int i = 0; i < rows; ++i) {
        printf("%d\n", a[i][colIndex]);
    }
}

void changeColumn(int a[][4], int colIndex, int rows, int newValue) {
    for (int i = 0; i < rows; ++i) {
        //colIndex value assigned 20
        a[i][colIndex] = newValue;
    }
}

int main() {
    //3 rows, 4 indexes in each row
    int array1[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int colIndexToChange = 2; // Change the values in the third column (column at index 2)
    int newValue = 20;

    printColumn(array1, colIndexToChange, 3, 'B'); // 'B' stands for Before
    //calls changeColumn function
    changeColumn(array1, colIndexToChange, 3, newValue);
    printColumn(array1, colIndexToChange, 3, 'A'); // 'A' stands for After

    return 0;
}