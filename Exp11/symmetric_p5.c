/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 11
Program     : Check whether a given n x n matrix is symmetric or not using pointers
*/

#include <stdio.h>

int isSymmetric(int n, int a[n][n])
{
    int i, j;
    int *p = &a[0][0];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (*(p + i * n + j) != *(p + j * n + i))
                return 0;
        }
    }
    return 1;
}

int main()
{
    int a[10][10], n, i, j;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("\nGiven matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    if (isSymmetric(n, a))
        printf("\nMatrix is Symmetric.\n");
    else
        printf("\nMatrix is not Symmetric.\n");

    return 0;
}
