



/*
4.	Write a C Program to count frequency of digits in a number
*/
#include <stdio.h>
#include <stdlib.h>
#define INTMAX 20 

int main()
{
    char* buffer = (char*)malloc(INTMAX);
    int input; int i = 0;
    int digits[10] = {0};
    fgets(buffer , INTMAX, stdin );
    input = strtol(buffer , (char**)NULL , 10 );
    free(buffer);
    while(input != 0) 
    {
        digits[input%10]++;
        input/=10;
    }
    for(i = 0 ; i < 10; i++)    {
        printf("%d  :  %d\n" , i , digits[i]);
    }
    return 0;
}