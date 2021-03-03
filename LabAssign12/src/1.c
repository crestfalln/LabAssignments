#include <stdio.h>

typedef struct
{
    float real;
    float img;
} complex;

void complex_sum(complex *num1, complex *num2)
{
    printf("Sum = %0.3f + (%0.3fi)", num1->real + num2->real, num1->img + num2->img);
}

int main()
{
    complex num1, num2;
    printf("For 1st complex number:\nEnter the real and imaginary parts: ");
    scanf("%f %f", &num1.real, &num1.img);
    printf("For 2st complex number:\nEnter the real and imaginary parts: ");
    scanf("%f %f", &num2.real, &num2.img);
    complex_sum(&num1 , &num2);
}
