/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 8
Program     : Recursive function for exponentiation (x^y)
*/

#include <stdio.h>

int exp(int x, int y)
{
    if (y == 0)
        return 1;
    else
        return x * exp(x, y - 1);
}

int main()
{
    int x, y, ans;

    printf("Enter base and exponent : ");
    scanf("%d %d", &x, &y);

    ans = exp(x, y);

    printf("Result = %d\n", ans);

    return 0;
}
