/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 9
Program     : Product structure – search product by ID
*/

#include <stdio.h>

struct product
{
    int id;
    char name[30];
    float price;
};

int main()
{
    struct product p[5];
    int i, search, found = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter ID, Name and Price: ");
        scanf("%d %s %f", &p[i].id, p[i].name, &p[i].price);
    }

    printf("\nEnter Product ID to search: ");
    scanf("%d", &search);

    for (i = 0; i < 5; i++)
    {
        if (p[i].id == search)
        {
            printf("\nProduct Found\n");
            printf("ID    : %d\n", p[i].id);
            printf("Name  : %s\n", p[i].name);
            printf("Price : %.2f\n", p[i].price);
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("Product not found\n");

    return 0;
}
