#include <stdio.h>
int digit_sum(int );

int main()
{
    int a;
    scanf("%d" , &a);
    printf("Sum of digits %d" , digit_sum(a));
}

int digit_sum(int num)
{
    int result = 0;
    while(num != 0)
    {
        result += num%10;
        num /= 10;
    }
    return result;
}