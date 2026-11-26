/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 10
Program     : Design a Union for book (ISBN, Title, Price) and display the details
*/

#include <stdio.h>

union book
{
    int isbn;
    char title[30];
    float price;
};

int main()
{
    union book b;

    printf("Enter ISBN Number: ");
    scanf("%d", &b.isbn);
    printf("ISBN Number: %d\n", b.isbn);

    printf("Enter book title: ");
    scanf(" %[^\n]", b.title);          // reads string with spaces
    printf("Book Title: %s\n", b.title);

    printf("Enter book price: ");
    scanf("%f", &b.price);
    printf("Book Price: %.2f\n", b.price);

    return 0;
}
