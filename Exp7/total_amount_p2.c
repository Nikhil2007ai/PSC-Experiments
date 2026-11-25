/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 7
Program     : Function to calculate and display total amount using compound interest formula
*/

#include <stdio.h>

void TotalAmount(float p, float r, int n);

int main()
{
    float p, r;
    int n;

    printf("Enter Principal amount : ");
    scanf("%f", &p);

    printf("Enter rate (in decimal) : ");
    scanf("%f", &r);

    printf("Enter number of periods : ");
    scanf("%d", &n);

    TotalAmount(p, r, n);

    return 0;
}

void TotalAmount(float p, float r, int n)
{
    int i;
    for (i = 1; i <= n; i++)
        p = p * (1 + r);

    printf("Total amount = %.2f\n", p);
}
