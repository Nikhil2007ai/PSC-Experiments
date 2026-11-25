/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 6
Program     : Search for the pattern (sub string) in the subject string
              (main string) and return the position/index of the start of
              the string where match is found
*/

#include <stdio.h>

int main()
{
    char s[100], p[50];
    int i, j, found = 0;

    printf("Enter main string : ");
    scanf("%99s", s);

    printf("Enter pattern : ");
    scanf("%49s", p);

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; p[j] != '\0'; j++)
        {
            if (s[i + j] != p[j])
                break;
        }

        if (p[j] == '\0')
        {
            printf("Pattern found at index %d", i);
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("Pattern not found");

    return 0;
}
