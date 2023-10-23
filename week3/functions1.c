#include <stdio.h>

// sum function - tell it what the result of the function will be, passing in parameters a and b
//a and b are not important in terms of what we name these variables
// a,b and sum are local variables
int sum (int a, int b)
{
    //creating integer
    int answer;
    answer = a + b;
    // z because value that is returned from this function
    return answer;
}

int main () 
{
    int y = 2;
    //5 is a because it is the first one in the brackets 
    int z = sum(sum(1,2), y); // calling our new function

    printf ("The sum of 5 and %d is %d\n", y, z);
}