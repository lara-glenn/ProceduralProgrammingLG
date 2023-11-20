#include <stdio.h>
#include <string.h>

struct student {
    char name [200];
    char student_id [11]; // Assuming 10 digits.
    int mark;
    //char newstudent;
};

int main () {
    struct student new_student;
    // = {"Name Surname", "28932123", 35};

    printf("Enter student name:\n");
    scanf("%s", new_student.name);
    
    printf("Enter student ID:\n");
    scanf("%s", new_student.student_id);

    printf("Enter mark:\n");
    scanf("%d", &new_student.mark);


    printf("Student name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %u\n", new_student.mark);
    return 0;
}