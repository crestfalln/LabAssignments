//#### 2. Write a C program to print following Fabonacci series using recursive function.
#include <stdio.h>

int fibonacci(int n, int *arr)
{
    if (n == 2 || n == 1)
        arr[n - 1] = 1;
    else if (arr[n - 2] != 0 && arr[n - 3] != 0)
        arr[n-1] = arr[n - 2] + arr[n - 3];
    else 
        arr[n - 1] = fibonacci(n - 1, arr) + fibonacci(n - 2, arr);
    return arr[n-1];
}

int main()
{
    const size_t toPrintSize = 7;
    int toPrint[toPrintSize];
    for (int i = 0; i < toPrintSize; i++)
        toPrint[i] = 0;
    fibonacci(toPrintSize, toPrint);
    for (int i = 0; i < toPrintSize; i++)
    {
        printf("%d ", toPrint[i]);
    }
}
