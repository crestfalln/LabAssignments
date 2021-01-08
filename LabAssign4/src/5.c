/*
5.	Write a C program to print Floyd’s Triangle:
1
2	3
4	5	6
7	8	9	10
Hint: Using Nested Looping
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int i = 0;
    double null = 0;
    for (i = 1; i < 1000; i++)
    {
        printf("%d  " , i);
        if (modf(sqrt(8 * i + 1) , &null) == 0)
        {
            printf("\n");
        }
    }
}