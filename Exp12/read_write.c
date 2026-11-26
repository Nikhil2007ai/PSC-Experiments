/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 12
Program     : Read characters from user, write to a file and display the content
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char str[200];

    // Writing to file
    fp = fopen("data.txt", "w");
    if (fp == NULL)
    {
        printf("Error: Unable to open file for writing.\n");
        return 1;
    }

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);   
    fputs(str, fp);
    fclose(fp);

    // Reading from file
    fp = fopen("data.txt", "r");
    if (fp == NULL)
    {
        printf("Error: Unable to open file for reading.\n");
        return 1;
    }

    printf("\nContent of the file:\n");
    while (fgets(str, sizeof(str), fp) != NULL)
    {
        printf("%s", str);
    }
    fclose(fp);

    return 0;
}
