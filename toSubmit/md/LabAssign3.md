---
title: Lab Assignment 3
author: Himanshu Gupta
pagestyle: empty
geometry: margin=1cm
---
#### 1.	Write a C Program to Check whether the number you input is Palindrome or Not.
```c
#include <stdio.h>
int main()
{
    int num;
    int cpynum = num;
    int revnum = 0;
    scanf("%d" , &num);
    cpynum = num;
    while(num != 0)
    {
        revnum = revnum*10 + num%10;    
        num/=10;
    }
    if(revnum == cpynum)
    {
        printf("\nIs Palindrone");
    }
    else
    {
        printf("\nNot Palindrone");
    }
    
}
```
#### `$ bin/1.o`
>**Input:**  
>>121  
>  
>**Output:**  
>>Is Palindrone  

#### 2.	Write a C Program to Check Whether a Number is Prime or Not.
#include <stdio.h>
int main()
{
    int input;
    int truth;
    scanf("%d" , &input);
    for(int i = 2 ; i < input; i++)
    {
        if(input%i == 0)
        {
            printf("Not Prime");
            truth = 0;
            break;
        }
        truth = 1;
    }
    if(truth)
    {
        printf("Is Prime");
    }
}
#### `$ bin/2.o`
>**Input:**  
>>23  
>  
>**Output:**  
>>Is Prime

#### 3.	Write a C program to check whether a three digit number is an Armstrong number or not.
```c
#include <stdio.h>
int main()
{
    int input;
    int tmp;
    int cpyinput;
    int arm = 0;
    scanf("%d" , &input);
    cpyinput = input;
    while(input != 0)
    {
        tmp = (input%10); tmp = tmp*tmp*tmp;
        input/=10;
        arm+=tmp;
    }
    if(arm == cpyinput)
    {
        printf("Is Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
}
```
#### `$ bin/3.o`
>**Input:**  
>>123
>  
>**Output:**  
>>Not Armstrong  


#### 4.	Write a C Program to find largest of given three numbers.
```c
#include <stdio.h>
int main()
{
   int input1 , input2 , input3;
   scanf("%d%d%d" , &input1 , &input2 , &input3);
   if(input1 < input2)
   {
       if(input2 < input3)
            printf("\n%d" , input3);
        else
            printf("\n%d" , input2);
   }
   else
   {
       if(input1 < input3)
            printf("\n%d" , input3);
        else
            printf("\n%d" , input1);
   }
}
```
#### `$ bin/4.o`
>**Input:**  
>>120  
>>6  
>>154  
>  
>**Output:**  
>>154


#### 5.	Write a C program to print Fibonacci Sequence up to a certain number input by you.
```c
#include <stdio.h>
int main()
{
    int term1 = 0, term2 = 1 , term3 = term1+term2, input;
    scanf("%d" , &input);
    printf("\n%d\n%d" , term1 , term2);
    while(term3 <= input)
    {
        printf("\n%d" , term3);
        term1 = term2;
        term2 = term3;
        term3 = term1 + term2;
    }
}
```
#### `$ bin/5.o`
>**Input:**  
>>10  
>  
>**Output:**  
>>0  
1  
1  
2  
3  
5  
8  
>