//#### 1. Write a C function to sort the numbers of an array using Insertion sort.
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

void insert_sort(int *arr, const size_t arrSize)
{
    int iter = 1, secIter = iter - 1;
    int key;
    for (iter = 0; iter < arrSize; iter++)
    {
        key = arr[iter];
        for (secIter = iter - 1; secIter >= 0; secIter--)
        {
            if (arr[secIter] >= arr[secIter + 1])
                arr[secIter + 1] = arr[secIter];
            else
                break;
        }
        arr[secIter + 1] = key;
    }
}

int main()
{
    const size_t inbuffSize = 100; //for the input buffer
    int iter = 0;
    const size_t inputArraySize = 5; //size of the array to be sorted
    int inputArray[inputArraySize];
    printf("Enter Array: \n");
    for (iter = 0; iter < inputArraySize; iter++)
    {
        char inbuff[inbuffSize];                              //tmp buff to store input
        fgets(inbuff, inbuffSize - 2, stdin);                 //taking input in buff
        inputArray[iter] = strtol(inbuff, (char **)NULL, 10); //conv. and storing input
    }
    //array is now ready to be sorted
    insert_sort(inputArray, inputArraySize);
    //array is now sorted
    printf("Sorted Array: ");
    for (iter = 0; iter < inputArraySize; iter++)
    {
        printf("%d ", inputArray[iter]);
    }
    printf("\n");
}
