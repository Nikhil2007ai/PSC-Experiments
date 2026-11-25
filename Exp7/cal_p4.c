/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 7
Program     : Calculator using separate functions for addition, subtraction,
              multiplication and division
*/

#include <stdio.h>

float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);

int main()
{
    float a, b;
    int choice;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);

    printf("Enter two numbers : ");
    scanf("%f %f", &a, &b);

    switch (choice)
    {
        case 1:
            printf("Result = %.2f\n", add(a, b));
            break;

        case 2:
            printf("Result = %.2f\n", sub(a, b));
            break;

        case 3:
            printf("Result = %.2f\n", mul(a, b));
            break;

        case 4:
            if (b == 0)
                printf("Division by zero is not possible\n");
            else
                printf("Result = %.2f\n", div(a, b));
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}

float add(float a, float b)
{
    return a + b;
}

float sub(float a, float b)
{
    return a - b;
}

float mul(float a, float b)
{
    return a * b;
}

float div(float a, float b)
{
    return a / b;
}
