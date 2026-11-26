/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 11
Program     : Store data of n students and display the student with highest percentage
              using pointers and structures (arrow operator)
*/

#include <stdio.h>

struct student
{
    char name[50];
    int id;
    float percentage;
};

int main()
{
    struct student s[100];
    struct student *p, *max;
    int n, i;

    p = s;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]", (p + i)->name);
        printf("Enter ID: ");
        scanf("%d", &(p + i)->id);
        printf("Enter percentage: ");
        scanf("%f", &(p + i)->percentage);
    }

    max = p;

    for (i = 1; i < n; i++)
    {
        if ((p + i)->percentage > max->percentage)
            max = p + i;
    }

    printf("\nStudent with highest percentage:\n");
    printf("Name       : %s\n", max->name);
    printf("ID         : %d\n", max->id);
    printf("Percentage : %.2f\n", max->percentage);

    return 0;
}
