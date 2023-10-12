#include <stdio.h>

int main() {
    int a;

    for (a = 100; a >= 1; a-=5)
    {
        printf ("a is equal to %d\n", a);
    }
    printf ("Loop finished: a = %d\n", a);

    return (0);
}