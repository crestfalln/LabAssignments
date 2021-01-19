/*
1.	Write a C Program for Simple Calculator using switch case statements
*/


#include <stdio.h>

int main()
{
    float a = 0 , b = 0;
    char response = '0';
    double result = 0;
    printf("Enter Two numbers: ");
    scanf("%f%f" , &a , &b );
    printf("What would you like to do with them\n1.) Add(a)\n2.) Subtract(s)\n3.) Multiply(m)\n4.) Divide(d)\n");
    scanf(" %c" , &response);
    switch (response)
    {
    case 'a':
        result = a + b;
        break;
    case 's':
        result = a - b;
        break;
    case 'm':
        result = a * b;
        break;
    case 'd':
        result = a / b;
        break;
    default:
        printf("Wrong Response\n");
        return 0;
    }
    printf("Answer is: %0.2f" , result);
    return 0;
}