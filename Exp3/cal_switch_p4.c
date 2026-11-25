/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 3
Program     : Prepare a calculator using switch case
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float no1, no2, sum, sub, mul, div;

    do
    {
        printf("\n====== Calculator ======\n");
        printf("\n1 --- Addition");
        printf("\n2 --- Subtraction");
        printf("\n3 --- Multiplication");
        printf("\n4 --- Division");
        printf("\n5 --- Exit");
        printf("\n\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\n===== Addition =====\n");
                printf("\nEnter number 1 = ");
                scanf("%f", &no1);
                printf("\nEnter number 2 = ");
                scanf("%f", &no2);
                sum = no1 + no2;
                printf("Result = %.2f\n", sum);
                break;

            case 2:
                printf("\n===== Subtraction =====\n");
                printf("\nEnter number 1 = ");
                scanf("%f", &no1);
                printf("\nEnter number 2 = ");
                scanf("%f", &no2);
                sub = no1 - no2;
                printf("Result = %.2f\n", sub);
                break;

            case 3:
                printf("\n===== Multiplication =====\n");
                printf("\nEnter number 1 = ");
                scanf("%f", &no1);
                printf("\nEnter number 2 = ");
                scanf("%f", &no2);
                mul = no1 * no2;
                printf("Result = %.2f\n", mul);
                break;

            case 4:
                printf("\n===== Division =====\n");
                printf("\nEnter number 1 = ");
                scanf("%f", &no1);
                printf("\nEnter number 2 = ");
                scanf("%f", &no2);
                if (no2 != 0)
                {
                    div = no1 / no2;
                    printf("Result = %.2f\n", div);
                }
                else
                {
                    printf("Cannot divide by zero!\n");
                }
                break;

            case 5:
                exit(0);

            default:
                printf("\nInvalid Choice !!");
        }
    } while (choice != 5);

    return 0;
}
