/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 11
Program     : Addition of two 3x3 matrices using pointers
*/

#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];
    int *p1, *p2, *p3;
    int i, j;

    p1 = &a[0][0];
    p2 = &b[0][0];
    p3 = &c[0][0];

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < 9; i++)
        scanf("%d", p1 + i);

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < 9; i++)
        scanf("%d", p2 + i);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            *(p3 + i * 3 + j) = *(p1 + i * 3 + j) + *(p2 + i * 3 + j);
        }
    }

    printf("\nAddition of two matrices:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d\t", *(p3 + i * 3 + j));
        printf("\n");
    }

    return 0;
}
