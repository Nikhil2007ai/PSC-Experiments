/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 9
Program     : Student structure – result table of 10 students and highest total marks
*/

#include <stdio.h>

struct student
{
    int id;
    char name[30];
    int m1, m2, m3;
    int total;
};

int main()
{
    struct student s[10];
    int i, max = 0;

    for (i = 0; i < 10; i++)
    {
        printf("\nEnter details of Student %d:\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &s[i].id);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter marks of three subjects: ");
        scanf("%d %d %d", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
    }

    printf("\n----- STUDENT RESULT TABLE -----\n");
    printf("ID\tName\tM1\tM2\tM3\tTotal\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%d\n",
               s[i].id, s[i].name, s[i].m1, s[i].m2, s[i].m3, s[i].total);

        if (s[i].total > s[max].total)
            max = i;
    }

    printf("\nHIGHEST TOTAL MARKS\n");
    printf("ID   : %d\n", s[max].id);
    printf("Name : %s\n", s[max].name);
    printf("Total: %d\n", s[max].total);

    return 0;
}
