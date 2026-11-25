/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 5
Program     : Delete a particular element entered by user
*/

#include <stdio.h>

int main()
{
    int a[100], n, i, index;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter %d elements : \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the index of the element to be deleted : ");
    scanf("%d", &index);

    for (i = index; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;

    printf("Array after deletion : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
