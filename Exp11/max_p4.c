/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 11
Program     : Find maximum number from 1-D array and return its address using pointers
*/

#include <stdio.h>

int *findMax(int a[], int n)
{
    int i, max = 0;

    for (i = 1; i < n; i++)
    {
        if (a[i] > a[max])
            max = i;
    }
    return &a[max];
}

int main()
{
    int a[100], n, i;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p = findMax(a, n);

    printf("Maximum number = %d\n", *p);

    return 0;
}
