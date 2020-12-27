



/*
1. If a four digit number is input through keyboard, Write a C program to reverse the number and obtain the sum of first and last digit of this number
*/

#include <stdio.h>
int main()
{
    int inNum = 0;
    int revNum = 0;
    scanf("%d" , &inNum);
    int cpNum = inNum;                                      //Copy the input to modify Input is never modified                         
    while(cpNum != 0)                                       //Main loop to reverse the input
    {
        revNum = revNum*10 + cpNum%10;
        cpNum/=10;
    }
    printf("Sum Of Last and First: %d" , revNum%10 + inNum%10);
    printf("\nReverse Num: %d" , revNum);
}