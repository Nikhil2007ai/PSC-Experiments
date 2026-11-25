/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 6
Program     : Sorting of strings (alphabetical order)
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[5][50], temp[50];
    int i, j;

    printf("Enter 5 strings : \n");
    for (i = 0; i < 5; i++)
        scanf("%s", s[i]);

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (strcmp(s[j], s[j + 1]) > 0)
            {
                strcpy(temp, s[j]);
                strcpy(s[j], s[j + 1]);
                strcpy(s[j + 1], temp);
            }
        }
    }

    printf("Strings in alphabetical order : \n");
    for (i = 0; i < 5; i++)
        printf("%s\n", s[i]);

    return 0;
}
