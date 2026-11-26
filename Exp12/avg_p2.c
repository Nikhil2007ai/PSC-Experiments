/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 12
Program     : Write integer numbers to a file, read them back and calculate average
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    int n, num, i, sum = 0, count = 0;
    float average;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    // Writing numbers to file
    fp = fopen("numbers.txt", "w");
    if (fp == NULL)
    {
        printf("Error: Unable to open file for writing.\n");
        return 1;
    }

    printf("Enter %d integer numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        fprintf(fp, "%d\n", num);
    }
    fclose(fp);

    // Reading numbers from file and calculating average
    fp = fopen("numbers.txt", "r");
    if (fp == NULL)
    {
        printf("Error: Unable to open file for reading.\n");
        return 1;
    }

    printf("\nNumbers read from file:\n");
    while (fscanf(fp, "%d", &num) == 1)
    {
        printf("%d ", num);
        sum += num;
        count++;
    }
    fclose(fp);

    if (count > 0)
    {
        average = (float)sum / count;
        printf("\n\nSum     = %d\n", sum);
        printf("Average = %.2f\n", average);
    }
    else
    {
        printf("\nNo numbers found in the file.\n");
    }

    return 0;
}
