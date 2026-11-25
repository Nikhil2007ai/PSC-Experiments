/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 5
Program     : Multiplication of two 3x3 matrices
*/

#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j, k;

    printf("Enter elements of first matrix : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant Matrix : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)  
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
