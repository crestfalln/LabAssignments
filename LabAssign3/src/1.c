



/*
1.	Write a C Program to Check whether the number you input is Palindrome or Not.
Hint: An integer is a palindrome if the reverse of that number is equal to the original number (for example 121)
*/
#include <stdio.h>
int main()
{
    int num;
    int cpynum = num;
    int revnum = 0;
    scanf("%d" , &num);
    cpynum = num;
    while(num != 0)
    {
        revnum = revnum*10 + num%10;    
        num/=10;
    }
    if(revnum == cpynum)
    {
        printf("\nIs Palindrone");
    }
    else
    {
        printf("\nNot Palindrone");
    }
    
}