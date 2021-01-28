

/*
1.	Write a program in C to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....]
*/
#include <stdio.h>
#include <math.h>

double _inv_factorial(unsigned int num)
{
    long result = 1;
    if (num == 0)
        return 1;
    while (num != 1)
    {
        result *= num--;
    }
    return 1.0 / result;
}

int main()
{
    int iter = 0;
    int x, n;
    double result = 0;
    printf("Input x: ");
    scanf("%d", &x);
    printf("Input n: ");
    scanf("%d", &n);
    for (iter = 0; iter < n; iter++)
    {
        result += (pow(x, iter) * _inv_factorial(iter));
    }
    printf("%f" , result);
}