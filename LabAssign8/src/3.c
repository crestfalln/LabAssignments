



/*
3.	Write a C program to display the pattern of  pyramid with a number which will repeat the number in the same row.

   1
  2 2
 3 3 3
4 4 4 4
*/

#include <stdio.h>

int main()
{
    const int input = 4;
    int i , j;
    for(i = 1 ; i <= input ; i++)
    {
        for( j = 0 ; j < input - i ; j++)
            putc(' ' , stdout);
        for(j = 0 ; j < i ; j++)
            printf("%d " , i);
        putc('\n' , stdout);
        fflush(stdout);
    }
}
