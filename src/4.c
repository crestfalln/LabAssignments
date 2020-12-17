




/*
4.	Two numbers are input through the keyboard into two variables A and B.  Write a C  program to interchange the contents of A and B.
*/

#include <stdio.h>
int main()
{
    int a , b , temp;
    scanf("%d%d" , &a , &b);
    //a = temp ; a = b ; b = temp;                           //Method 1
    //a = a + b; b = a - b; a = a - b;                       //Method 2
    a = a ^ b; b = a ^ b; a = a ^ b;                         //Method 3
    printf("\n%d\n%d" , a , b);
}