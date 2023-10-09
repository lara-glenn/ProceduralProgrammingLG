
#include <stdio.h>

int main(){
    // setting up 15 slots of memory for a string
    char name[15];
    
    //prints "Hello, please enter your name" -  a prompt for the user
    printf("Hello, please enter your name: ");

    // Takes the user input and stores in name
    scanf("%s", name); //get data from user by scanning

    //prints the user's name
    printf("Your name is %s\n", name);

    return 0;
}