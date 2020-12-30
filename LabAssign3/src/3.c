



/*
3.	Write a C program to check whether a three digit number is an Armstrong number or not.
Hint: A three digit number is an Armstrong number if sum of cubes of its digits is equal to the number itself. 
370 is an Armstrong Number because 
370 = 3*3*3 + 7*7*7 + 0*0*0
    = 27 + 343 + 0
    = 370
But 123 is not an Armstrong number
*/
#include <stdio.h>
int main()
{
    int input;
    int tmp;
    int cpyinput;
    int arm = 0;
    scanf("%d" , &input);
    cpyinput = input;
    while(input != 0)
    {
        tmp = (input%10); tmp = tmp*tmp*tmp;
        input/=10;
        arm+=tmp;
    }
    if(arm == cpyinput)
    {
        printf("Is Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
}