/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 6
Program     : Find the reverse of a given string
*/

#include <stdio.h>

int main()
{
    char s[100], rev[100];
    int i, j = 0, len = 0;

    printf("Enter a string : ");
    scanf("%s", s);

    while (s[len] != '\0')
        len++;

    for (i = len - 1; i >= 0; i--)
    {
        rev[j] = s[i];
        j++;
    }
    rev[j] = '\0';

    printf("Reverse of string : %s", rev);

    return 0;
}
