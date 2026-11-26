/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 9
Program     : Sort product details alphabetically by name (swap whole structure)
*/

#include <stdio.h>
#include <string.h>

struct product
{
    int id;
    char name[30];
    float price;
};

int main()
{
    struct product p[5], temp;
    int i, j;

    for (i = 0; i < 5; i++)
    {
        printf("Enter Product ID, name and price: ");
        scanf("%d %s %f", &p[i].id, p[i].name, &p[i].price);
    }

    /* Bubble sort by name */
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(p[i].name, p[j].name) > 0)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    printf("\nProduct Details in Alphabetical Order:\n");
    printf("ID\tName\tPrice\n");

    for (i = 0; i < 5; i++)
        printf("%d\t%s\t%.2f\n", p[i].id, p[i].name, p[i].price);

    return 0;
}
