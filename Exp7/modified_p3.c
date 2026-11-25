/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 7
Program     : Modified program – function returns the total amount
*/

#include <stdio.h>

float TotalAmount(float p, float r, int n);

int main()
{
    float p, r, amount;
    int n;

    printf("Enter Principal Amount : ");
    scanf("%f", &p);

    printf("Enter rate (in decimal) : ");
    scanf("%f", &r);

    printf("Enter number of periods : ");
    scanf("%d", &n);

    amount = TotalAmount(p, r, n);

    printf("Total amount = %.2f\n", amount);

    return 0;
}

float TotalAmount(float p, float r, int n)
{
    int i;
    for (i = 1; i <= n; i++)
        p = p * (1 + r);

    return p;
}
