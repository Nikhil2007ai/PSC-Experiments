/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 4
Program     : Count blanks, tabs and newlines using while and getchar
*/

#include <stdio.h>

int main()
{
    int ch;
    int newlines = 0, blanks = 0, tabs = 0;

    printf("Enter a text (Press Ctrl+D to finish) : ");

    while ((ch = getchar()) != EOF)
    {
        if (ch == '\t')
        {
            tabs++;
        }
        else if (ch == '\n')
        {
            newlines++;
        }
        else if (ch == ' ')
        {
            blanks++;
        }
    }

    printf("\n Count of blanks = %d", blanks);
    printf("\n Count of newlines = %d", newlines);
    printf("\n Count of tabs = %d", tabs);

    return 0;
}
