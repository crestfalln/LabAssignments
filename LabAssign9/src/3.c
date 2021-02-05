#include <stdio.h>
int main()
{
    size_t size = 5;
    int arr[size];
    int temp = -1;
    int iter = 0, iter2 = 0;
    for (iter = 0; iter < size; iter++)
        scanf("%d", arr + iter);
    for (iter = 0; iter < size; iter++)
    {
        for (iter2 = iter + 1; iter2 < size; iter2++)
        {
            if (arr[iter] == arr[iter2])
            {
                printf("Duplicate Found");
                return 0;
            }
        }
    }
    printf("Duplicate Not Found");
    return 0;
}