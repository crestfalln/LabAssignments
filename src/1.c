




/*
1.	Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a C Program to calculate gross salary.
*/

#include <stdio.h>
int main()
{
    float grossSalary, rent = 20, baseSalary, dearness = 40;
    printf("Enter Base Salary\n");
    scanf("%f", &baseSalary);
    grossSalary = baseSalary * (1.00 + (dearness / 100) - (rent / 100));
    printf("The Gross Salary is: \n%2f", grossSalary);
}