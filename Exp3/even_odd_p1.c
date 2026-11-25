/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 3
Program     : Determine whether input number is ODD or EVEN
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("%d is even.", n);
    }
    else
    {
        printf("%d is odd.", n);
    }

    return 0;
}
