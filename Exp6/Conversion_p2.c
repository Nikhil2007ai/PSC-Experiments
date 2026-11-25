/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 6
Program     : Convert all lower case characters of a given string into upper
              case and all upper case characters into lower case. Also count
              number of characters of a given string
*/

#include <stdio.h>

int main()
{
    char s[100];
    int i = 0, count = 0;

    printf("Enter a string : ");
    scanf("%s", s);

    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
        else
            s[i] = s[i];

        count++;
        i++;
    }

    printf("Converted string : %s \n", s);
    printf("Number of characters : %d", count);

    return 0;
}
