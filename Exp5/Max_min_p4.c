/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 5
Program     : Find the minimum and maximum number from a 1-D array without
              sorting, and swap the positions of minimum and maximum
*/

#include <stdio.h>

int main()
{
    int a[100], n, i;
    int min, max, min_pos = 0, max_pos = 0, temp;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter %d elements : \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    min = a[0];
    max = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            min_pos = i;
        }
        if (a[i] > max)
        {
            max = a[i];
            max_pos = i;
        }
    }

    printf("\n Minimum = %d \n", min);
    printf(" Maximum = %d \n", max);

    temp = a[min_pos];
    a[min_pos] = a[max_pos];
    a[max_pos] = temp;

    printf("\n Array after swapping minimum and maximum : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
