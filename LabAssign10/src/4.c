#include <stdio.h>
void leap_check(int year);

int main()
{
    int in_year;
    scanf("%d" , &in_year);
    leap_check(in_year);
}

void leap_check(int year)
{
    if(year%4 == 0 && year%100 != 0 || year%400 == 0)
    {
        printf("Leap Year");
        return;
    }
    printf("Not Leap Year");
}