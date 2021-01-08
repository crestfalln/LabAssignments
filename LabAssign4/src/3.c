



/*
3.	Write a C program that takes two Integer arrays as input and inserts the common elements of both arrays into third array
*/
#include <stdio.h>

int main()
{
    int size1, size2;
    printf("Enter Size of the First Array: ");
    scanf("%d" , &size1);
    printf("Enter Size of the Second Array: ");
    scanf("%d" , &size2);
    int arr1[size1] , arr2[size2];
    int arr3[size1>=size2?size1:size2];
    int iter = 0;
    int i = 0 ,j = 0;
    printf("Enter Values of the first Array: \n");
    for(i = 0; i < size1; i++)
    {
       scanf("%d" , arr1+i); 
    }
    printf("Enter Values of the Second Array:\n");
    for(i = 0; i < size2; i++)
    {
       scanf("%d" , arr2+i); 
    }
    for(i=0; i < size1; i++)
    {
        for(j=0; j<size2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                arr3[iter]=arr1[i];
                iter++;
            }
        }
    }
    printf("Common Elements are:\n");
    for(i = 0 ; i < iter; i++)
    {
        printf("%d\t" , *(arr3+i));
    }
}