



/*
2.	Write a C Program to Check Whether a Number is Prime or Not.
Hint: A Prime number should be greater than 1 and It should have only 2 factors which are 1 and the number itself. Example for prime numbers: 2, 3, 5, 7, 11, 13, 17, 19, 23 etc. 
*/
#include <stdio.h>
int main()
{
    int input;
    int truth;
    scanf("%d" , &input);
    for(int i = 2 ; i < input; i++)
    {
        if(input%i == 0)
        {
            printf("Not Prime");
            truth = 0;
            break;
        }
        truth = 1;
    }
    if(truth)
    {
        printf("Is Prime");
    }
}