



/*
1.	Write a C program to find the sum of elements of an array
*/
#include <stdio.h>

int main()
{
    const int size = 4;
    int arr[size];
    int iter = 0;
    int sum = 0;
    printf("Enter The Values to Add:\n");
    for (iter = 0; iter < size; iter++)
    {
        scanf("%d", arr + iter);
    }
    for (iter = 0; iter < size; iter++)
    {
        sum += *(arr + iter);
    }
    printf("%d", sum);
}