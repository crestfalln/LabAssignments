



/*
4.	Write a C program to evaluate the square root of a series of numbers and print the results.  The process stops when the number 9999 is typed. (Use break and continue)
*/
#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int n = 0;
    printf("Enter Values in to get their square root!\n(Type 9999 to exit the loop)\n");
    while (n != 9999)
    {
        scanf("%d", &n);
        printf("%0.2f\n" , sqrt(n));
    }
}