/*
5.	If a five digit number is input through the keyboard, write a C program to calculate the sum of its digits.
(Hint: Use the modulus operator %)
*/

#include <stdio.h>
int main()
{
    int num = 0;
    int sum = 0;
    scanf("%d", &num);
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    printf("\n%d", sum);
}
