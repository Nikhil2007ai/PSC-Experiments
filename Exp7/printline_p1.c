/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 7
Program     : Function which prints the '=' sign 81 times using a loop
*/

#include <stdio.h>

void Printline(void);

int main()
{
    Printline();
    return 0;
}

void Printline(void)
{
    int i;
    for (i = 1; i <= 81; i++)
        printf("=");
    printf("\n");
}
