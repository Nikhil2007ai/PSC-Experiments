/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 2
Program     : Convert Fahrenheit to Celsius
*/

#include <stdio.h>

int main()
{
    float F, C;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);

    C = (F - 32) / 1.8;

    printf("Temperature in Celsius = %.2f\n", C);

    return 0;
}
