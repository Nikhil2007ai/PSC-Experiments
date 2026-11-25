/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 8
Program     : Recursive function for sum of digits of a number
*/

#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return n % 10 + sum(n / 10);
}

int main()
{
    int n, ans;

    printf("Enter a number : ");
    scanf("%d", &n);

    ans = sum(n);

    printf("Sum of digits = %d\n", ans);

    return 0;
}
