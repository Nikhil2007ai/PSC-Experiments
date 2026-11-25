/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 8
Program     : Read two strings, pass them as arguments, find length of second string
              and append its last 3 characters to the first string
*/

#include <stdio.h>

void append(char s1[], char s2[])
{
    int len1 = 0, len2 = 0;

    while (s1[len1] != '\0')
        len1++;

    while (s2[len2] != '\0')
        len2++;

    s1[len1]     = s2[len2 - 3];
    s1[len1 + 1] = s2[len2 - 2];
    s1[len1 + 2] = s2[len2 - 1];
    s1[len1 + 3] = '\0';

    printf("Length of second string = %d\n", len2);
    printf("First string after appending = %s\n", s1);
}

int main()
{
    char s1[100], s2[100];

    printf("Enter first string : ");
    scanf("%s", s1);

    printf("Enter second string : ");
    scanf("%s", s2);

    append(s1, s2);

    return 0;
}
