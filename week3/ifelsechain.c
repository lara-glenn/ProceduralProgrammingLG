#include <stdio.h>

int main() {

    int mark;
    while (mark < 0 || mark > 100) {

    printf ("Enter the mark: \n");
    scanf ("%d", &mark);

        if (mark >= 70)
        {
            printf ("The mark of %d is a first\n", mark);
        }
        else if (mark >= 60 && mark < 70)
        {
            printf("The mark of %d is a 2:1\n", mark);
        }
        else if (mark < 40)
        {
            printf ("The mark of %d is a fail\n", mark);
        }
        else
        {
            printf ("The mark of %d is a pass\n", mark);
        }
    }
    return 0;
}