

/*
4.	Write a C program to check whether a given number is a perfect number or not.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    unsigned int divisor;
    unsigned int input;
    unsigned int sum = 1;
    char buff[9];
    fgets(buff, 9, stdin);
    input = strtol(buff, (char **)NULL, 10);
    for (divisor = 2; divisor <= (int)sqrt(input); divisor++)
    {
        if (input % divisor == 0)
        {
            sum += divisor;
            sum += input/divisor;
        }
    }
    if (sum == input)
        printf("Perfect Number\n");
}