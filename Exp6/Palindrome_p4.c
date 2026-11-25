/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 6
Program     : Check whether given string is palindrome or not
*/

#include <stdio.h>

int main()
{
    char s[100];
    int i, len = 0, flag = 1;

    printf("Enter a string : ");
    scanf("%s", s);

    while (s[len] != '\0')
        len++;

    for (i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("String is palindrome");
    else
        printf("String is not palindrome");

    return 0;
}
