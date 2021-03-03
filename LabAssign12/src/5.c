#include <stdio.h>
#include <stdlib.h>

unsigned long factorial(int n)
{
    if(n == 1 || n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    const size_t inputbuffSize = 100;
    char inputbuff[inputbuffSize];
    printf("Enter number to find factorial: ");
    fgets(inputbuff , inputbuffSize - 2 , stdin);
    int input = strtol(inputbuff, (char**)NULL , 10);
    printf("Factorial is: %ld\n" , factorial(input)); 
}