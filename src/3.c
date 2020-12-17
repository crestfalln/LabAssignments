




/*
3.Temperature of a city in Fahrenheit degree is input through the keyboard. Write a C program to convert this temperature into Celsius.
(Hint: To convert temperatures in degrees Fahrenheit to Celsius, subtract 32 and multiply by 5/9) 
*/

#include <stdio.h>
int main()
{
    float inputFaren;
    scanf("%f", &inputFaren);
    printf("%0.2f", (inputFaren - 32) * 5 / 9);
}