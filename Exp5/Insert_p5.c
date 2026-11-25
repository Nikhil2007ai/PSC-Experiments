/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 5
Program     : Insert an element at a particular index entered by user
*/

#include <stdio.h>

int main()
{
    int a[100], n, i, index, element;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter %d elements : \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the index at which element is to be inserted : ");
    scanf("%d", &index);

    printf("Enter the element : ");
    scanf("%d", &element);

    for (i = n; i > index; i--)
    {
        a[i] = a[i - 1];
    }

    a[index] = element;
    n++;

    printf("Array after insertion : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
