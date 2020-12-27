



/*
5.	Write C program to read the values of x and y and print the results of the following expressions in one line 
a)	(x + y) / (x - y) 
b)	 (x + y)(x - y)
*/

#include <stdio.h>
int main()
{
    float x, y;
    printf("Input x: ");
    scanf("%f", &x);
    printf("Input y: ");
    scanf("%f", &y);
    printf("(x+y) / (x-y) = %0.2f\n" , (x+y) / (x-y));
    printf("(x+y) x (x-y) = %0.2f" , (x+y) * (x-y));
}
