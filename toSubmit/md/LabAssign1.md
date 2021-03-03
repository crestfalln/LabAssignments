---
title: Lab Assignment 1
author: Himanshu Gupta
pagestyle: empty
geometry: margin=1cm
---
#### 1.	Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a C Program to calculate gross salary.

```c
#include <stdio.h>
int main()
{
    float grossSalary, rent = 20, baseSalary, dearness = 40;
    printf("Enter Base Salary\n");
    scanf("%f", &baseSalary);
    grossSalary = baseSalary * (1.00 + (dearness / 100) - (rent / 100));
    printf("The Gross Salary is: \n%2f", grossSalary);
}
```
#### `$ bin/1.o`
>**Input:**
>>Enter Base Salary  
>>100  
>
>**Output:**
>>The Gross Salary is:   
>>120.000000

#### 2.	If the marks obtained by a student in five different subjects are input through the keyboard, find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100. 

```c
#include <stdio.h>
int main()
{
    int aggMarks= 0; 
    int temp , count = 0;
    printf("Enter Marks of each Subject\n");
    while (count != 5)
    {
        scanf("%d" , &temp);
        aggMarks+=temp;
        count++;
    }

    printf("Aggregate marks are: \n%d\nPercent Marks are: \n%0.2f" , aggMarks , count , (float)(aggMarks)*100/(count*100));
}
```
#### `$ bin/2.o`
>**Input:**  
>>Enter Marks of each Subject  
>>40  
>>23  
>>15   
>>42  
>>32   
>  
>**Output:**  
>>Aggregate marks are:   
>>152  
>>Percent Marks are:   
>>30.40%   
>

#### 3.Temperature of a city in Fahrenheit degree is input through the keyboard. Write a C program to convert this temperature into Celsius.

```c
#include <stdio.h>
int main()
{
    float inputFaren;
    scanf("%f", &inputFaren);
    printf("%0.2f", (inputFaren - 32) * 5 / 9);
}
```
#### `$ bin/3.o`
>**Input:**  
>> 12  
>  
>**Output:**
>> -11.11  
>  

#### 4.	Two numbers are input through the keyboard into two variables A and B.  Write a C  program to interchange the contents of A and B.

```c
#include <stdio.h>
int main()
{
    int a , b , temp;
    scanf("%d%d" , &a , &b);
    //a = temp ; a = b ; b = temp;                           //Method 1
    //a = a + b; b = a - b; a = a - b;                       //Method 2
    a = a ^ b; b = a ^ b; a = a ^ b;                         //Method 3
    printf("\n%d\n%d" , a , b);
}
```
#### `$ bin/4.o`
>**Input:**  
>>12  
>>32  
>  
>**Output:**  
>>32  
>>12  
>  
#### 5.	If a five digit number is input through the keyboard, write a C program to calculate the sum of its digits.

```c
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
```
#### `$ bin/5.o`
>**Input:**
>>12345  
>**Output:**  
>>15  