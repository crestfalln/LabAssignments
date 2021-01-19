



/*
5.	Write a C program to input number from user and check whether number is Strong number or not.
*/
#include <stdio.h>
#include <stdlib.h>
#define INTMAX (int)__INT_MAX__
int factorial(int n)
{
    int result = 1;
    for (; n > 0; n--)
        result *= n;
    return result;
}
int sumFacdigs(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += factorial(n % 10);
        n /= 10;
    }
    return sum;
}
int main()
{
    char *buffer = (char *)malloc(INTMAX);
    int input;
    fgets(buffer, INTMAX, stdin);
    input = strtol(buffer, (char **)NULL, 10);
    free(buffer);
    if (input == sumFacdigs(input))
    {
        printf("Power Number Found: %d", input);
        return 0;
    }
    printf("Not a Power Number: %d", input);
}