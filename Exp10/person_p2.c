/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 10
Program     : Store information of 10 persons using Union.
              Display DOB for child (age <= 18), age in years for adult,
              and "Old Person" message for age > 60
*/

#include <stdio.h>
#include <string.h>

#define CURRENT_YEAR 2026

union info
{
    char dob[12];       // for child
    int years;          // for adult
    char message[20];   // for old person
};

struct person
{
    char name[30];
    int age;
    union info data;
};

int main()
{
    struct person p[10];
    int i, day, month, year;

    for (i = 0; i < 10; i++)
    {
        printf("\nEnter details of person %d:\n", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]", p[i].name);

        printf("Enter date of birth (dd mm yyyy): ");
        scanf("%d %d %d", &day, &month, &year);

        p[i].age = CURRENT_YEAR - year;

        if (p[i].age <= 18)
        {
            sprintf(p[i].data.dob, "%02d-%02d-%04d", day, month, year);
        }
        else if (p[i].age <= 60)
        {
            p[i].data.years = p[i].age;
        }
        else
        {
            strcpy(p[i].data.message, "Old Person");
        }
    }

    printf("\n----- PERSON INFORMATION -----\n");

    for (i = 0; i < 10; i++)
    {
        printf("\nName: %s\n", p[i].name);

        if (p[i].age <= 18)
            printf("Date of Birth: %s\n", p[i].data.dob);
        else if (p[i].age <= 60)
            printf("Age: %d years\n", p[i].data.years);
        else
            printf("Message: %s\n", p[i].data.message);
    }

    return 0;
}
