/*
Name        : Nikhil Shee
Roll Number : 101
Batch       : F2
Semester    : 1
Experiment  : 2
Program     : Convert total seconds into
              hours, minutes and seconds
*/

#include <stdio.h>

int main()
{
    int ts, os;   // ts = total seconds, os = original seconds
    int hour, min, sec;

    printf("\nEnter total seconds: ");
    scanf("%d", &ts);

    os = ts;

    hour = ts / 3600;
    ts = ts % 3600;

    min = ts / 60;
    ts = ts % 60;

    sec = ts;

    printf("\nTotal seconds = %d\n%d Hour : %d Min : %d Second",
           os, hour, min, sec);

    return 0;
}
