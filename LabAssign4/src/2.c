



/*
2.	Write a C program that reads N integer numbers and arrange them in ascending order using Bubble sort.
Hint: Bubble sort, sometimes referred to as sinking sort, is a simple sorting algorithm that works by repeatedly stepping through the list to be sorted,
comparing each pair of adjacent items and swapping them if they are in the wrong order. The pass through the list is repeated until no swaps are needed
, which indicates that the list is sorted. The algorithm gets its name from the way smaller elements "bubble" to the top of the list.
Because it only uses comparisons to operate on elements, it is a comparison sort.
*/
#include <stdio.h>

int main()
{
    int i; 
    int n;
    int flag = 1;
    int arr[5];
    for(n = 0; n < 5 ; n++)
    {
        scanf("%d" , &arr[n]);
    }
    while (flag == 1)
    {
        flag = 0;
        for (i = 0; i < 5 - 1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                arr[i] = arr[i] + arr[i + 1];
                arr[i + 1] = arr[i] - arr[i + 1];
                arr[i] = arr[i] - arr[i + 1];
                flag = 1;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d  " , arr[i]);
    }
}