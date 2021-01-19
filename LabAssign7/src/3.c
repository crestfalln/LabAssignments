



/*
3.	Write a C program that takes a positive integer from the user and displays all the positive factors of that number.
(Hint:
Enter a positive integer: 60
Factors of 60 are: 1 2 3 4 5 6 10 12 15 20 30 60)
*/

#include <stdio.h>
int main()
{
    int input;
    scanf("%d" , &input);
    for(int i = 1; i <= input; i++)
    {
        if(input%i == 0)
            printf("%d " , i);
    }
    return 0;
}

