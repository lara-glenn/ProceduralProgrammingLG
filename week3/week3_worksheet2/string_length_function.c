
#include <stdio.h>

int stringlength(char* length) 
{
    int count = 0;
    while (*length != '\0') {
        count = count + 1;
    }

}


int main(){

    char* string;

    printf("Enter string");
    scanf("%s", &string);

    printf("The length of the string is %d", stringlength(*string));



    return 0;
}