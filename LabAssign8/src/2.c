



/*
2.	Write a C program to display the pattern of right angle triangle using an asterisk
*
**
***
****
*/

#include <stdio.h>

int main()
{
    int row = 5;
    int i = 0 , k = 0;
    for(i = 1 ; i <= row; i++)
    {
        for(k = 0 ; k < i; k++) 
            putc('*' , stdout);
        putc('\n' , stdout);
        fflush(stdout);
    }
}
