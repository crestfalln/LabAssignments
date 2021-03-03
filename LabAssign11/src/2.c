#include <stdio.h>
#include <stdlib.h>

int binTodec(char* bin)
{
    int i , j;
    int result = 0;
    for(j = 0 ; bin[j] != '\n'; ++j);
    j--;
    for(i = 0; i <= j; i++)
    {
        result += (bin[i] - '0') << (j - i) ;
    }
    return result;
}

int main()
{
    char input[10];
    fgets(input , 10 , stdin);
    printf("%d" , binTodec(input));
}