/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 3
Program     : Check if a given number is zero, positive or negative using if...else
*/

#include <stdio.h>

int main()
{
    float n;

    printf("Enter a number : ");
    scanf("%f", &n);

    if (n > 0)
    {
        printf("%.2f is positive.", n);
    }
    else if (n < 0)
    {
        printf("%.2f is negative.", n);
    }
    else
    {
        printf("No. is zero.");
    }

    return 0;
}
