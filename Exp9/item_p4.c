/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 9
Program     : Pass structure to function and update price & quantity
*/

#include <stdio.h>

struct item
{
    char name[30];
    float price;
    int quantity;
};

void update(struct item x, float p, int q)
{
    x.price = p;
    x.quantity = q;

    printf("\nUpdated Item Details:\n");
    printf("Name     : %s\n", x.name);
    printf("Price    : %.2f\n", x.price);
    printf("Quantity : %d\n", x.quantity);
}

int main()
{
    struct item x;
    float p;
    int q;

    printf("Enter item name, price and quantity: ");
    scanf("%s %f %d", x.name, &x.price, &x.quantity);

    printf("Enter updated price and quantity: ");
    scanf("%f %d", &p, &q);

    update(x, p, q);   /* passing structure by value (copy) */

    return 0;
}
