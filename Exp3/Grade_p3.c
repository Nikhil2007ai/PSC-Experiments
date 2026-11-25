/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 3
Program     : Display grade of a student according to marks using if-else ladder
*/

#include <stdio.h>

int main()
{
    int marks;

    printf("Enter the marks : ");
    scanf("%d", &marks);

    if (marks > 80)
    {
        printf("Grade = A");
    }
    else if (marks > 60 && marks <= 80)
    {
        printf("Grade = B");
    }
    else if (marks > 50 && marks <= 60)
    {
        printf("Grade = C");
    }
    else if (marks > 40 && marks <= 50)
    {
        printf("Grade = D");
    }
    else if (marks > 35 && marks <= 40)
    {
        printf("Grade = E");
    }
    else if (marks >= 0 && marks <= 35)
    {
        printf("Grade = F");
    }
    else
    {
        printf("Invalid marks");
    }

    return 0;
}
