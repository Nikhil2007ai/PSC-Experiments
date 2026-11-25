/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 8
Program     : Sort an array in ascending order by passing array as argument to function
*/

#include <stdio.h>

void sort(int a[], int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int a[100], n, i;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    printf("Enter elements : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sort(a, n);

    printf("Sorted array : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
