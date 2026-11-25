/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 6
Program     : Read two strings and check if they are same or not
              (without using strcmp() function)
*/

#include <stdio.h>

int main()
{
    char s1[100], s2[100];
    int i = 0, same = 0;

    printf("Enter first string : ");
    scanf("%s", s1);

    printf("Enter second string : ");
    scanf("%s", s2);

    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            same = 1;
            break;
        }
        i++;
    }

    if (same == 0)
        printf("Given strings are same");
    else
        printf("Given strings are not same");

    return 0;
}
