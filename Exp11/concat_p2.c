/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 11
Program     : Function mystrcat which appends string t at the end of string s using pointers
*/

#include <stdio.h>

void mystrcat(char *s, char *t)
{
    while (*s != '\0')
        s++;

    while (*t != '\0')
    {
        *s = *t;
        s++;
        t++;
    }
    *s = '\0';
}

int main()
{
    char s[100], t[50];

    printf("Enter first string: ");
    scanf(" %[^\n]", s);

    printf("Enter second string: ");
    scanf(" %[^\n]", t);

    mystrcat(s, t);

    printf("Concatenated string: %s\n", s);

    return 0;
}
