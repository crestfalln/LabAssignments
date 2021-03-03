---
title: Lab Assignment 11
author: Himanshu Gupta
pagestyle: empty
geometry: margin=1cm
---

#### 1. Write a C Program to convert lowercase string to uppercase using user defined function. 

```c
#include <stdio.h>

void to_upper(char * str)
{
    int i = 0;
    for(i = 0 ; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] += 'A' - 'a';
    }
}

int main()
{
    char str[] = "hello world";
    to_upper(str);
    printf(str);
}
```

#### 2. Write a C Program to Convert Binary Number to Decimal using user defined function.

```c
#include <stdio.h>
#include <stdlib.h>

int binTodec(char* bin)
{
    int i , j;
    int result = 0;
    for(j = 0 ; bin[j] != '\n'; ++j);
    j--;
    for(i = 0; i <= j; i++)
    {
        result += (bin[i] - '0') << (j - i) ;
    }
    return result;
}

int main()
{
    char input[10];
    fgets(input , 10 , stdin);
    printf("%d" , binTodec(input));
}
```

#### 3. Write a C program to Convert a Decimal to Binary Number using User Defined function.

```c
#include <stdio.h>

void decToBin(int dec)
{
    char bin[33];
    int i = 0;
    for(i = 0; i < 32; i++)
        bin[i] = '0';
    bin[32] = '\0';
    for(i = 0 ; dec != 0 ; i++)
    {
        bin[31 - i] = (dec % 2 ) + '0';
        dec /= 2;
    }
    printf(bin);

}

int main()
{
    int dec;
    scanf("%d" , &dec); 
    decToBin(dec);
}
```

#### 4. Write a C function that accepts a matrix and print transpose of that matrix.

```c
#include <stdio.h>

void input(int * mat , int x ,int y)
{
    int i = 0;
    for(i = 0; i < x*y; i++)
    {
        printf("Enter Element %d:%d : " , i / x + 1 , i%x + 1);
        scanf("%d" , mat + i);
    }
    
}

void transpose(int * mat , int x ,int y)
{
    int i = 0;
    int j = 0;
    printf("Transpose is: \n");
    for(i = 0; i < x; i++)
    {
        for(j = 0; j < y; j++) 
            printf("%d\t" , mat[i + x*j]);
        putchar('\n'); 
    }

}

int main()
{
    const int matrix_x = 2;
    const int matrix_y = 3;
    int matrix[matrix_x*matrix_y];
    input(matrix , matrix_x , matrix_y);
    transpose(matrix , matrix_x , matrix_y);
}
```

#### 5. Write a C Program to check if a given matrix is an Identity matrix using user defined function.

```c
#include <stdio.h>

void input(int * mat , int x ,int y)
{
    int i = 0;
    for(i = 0; i < x*y; i++)
    {
        printf("Enter Element %d:%d : " , i / x + 1 , i%x + 1);
        scanf("%d" , mat + i);
    }
    
}

char check(int *mat, int x, int y)
{
    int i, j;
    for (i = 0; i < y; i++)
    {
        for (j = 0; j < x; j++)
        {
            if (i == j)
            {
                if (mat[i * y + j] != 1)
                    return 0;
            }
            else if (mat[i * y + j] != 0)
                return 0;
            else
                continue;
        }
    }
    return 1;
}

int main()
{
    const int matrix_x = 3;
    const int matrix_y = 3;
    int matrix[matrix_x*matrix_y];
    input(matrix , matrix_x , matrix_y);
    if(check(matrix , matrix_x , matrix_y))
    {
        printf("\nIdentity Matrix found.");
        return 0;
    }
    printf("\nNot an Identity matrix");
    return 0;
}
```