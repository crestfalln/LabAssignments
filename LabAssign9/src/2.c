




#include <stdio.h>
int main()
{
    int temp = 0;
    int input = 0;
    scanf("%d", &input);
    temp = input%10;
    input/=10;
    while (input > 0)
    {
        if (temp > input % 10)
        {
            temp = input%10;
            input /= 10;
        }
        else
        {
            printf("Not ordered");
            return 0;
        }
    }
    printf("Ordered");
    return 0;
}