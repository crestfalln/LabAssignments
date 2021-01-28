

/*
4.	Write a C program to check whether a given number is a perfect number or not.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int divisor, quotient;
    unsigned int input;
    unsigned int sum = 1;
    char buff[9];
    fgets(buff, 9, stdin);
    input = strtol(buff, (char **)NULL, 10);
    quotient = input;
    for (divisor = 2; divisor < quotient; divisor++)
    {
        if (quotient % divisor == 0)
        {
            sum += divisor;
            quotient /= divisor;
            sum += quotient;
        }
        else
            quotient /= divisor;
    }
    if (sum == input)
        printf("Perfect Number\n");
}