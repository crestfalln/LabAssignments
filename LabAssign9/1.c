#include <stdio.h>
int main()
{
    int sum = 0, max = 0;
    int iter = 0;
    size_t size = 5;
    int arr[size];
    for(iter = 0 ; iter < size; iter++)
        scanf("%d" , &arr[iter]);
    for(iter = 0 ; iter < size; iter++)
        sum+=arr[iter];
    for(iter = 0 ; iter < size; iter++)
    {
        if(max < arr[iter])
            max = arr[iter];
    }
    printf("Max %d , Sum %d , Mean %0.2f\nReverse Order:" , max , sum , (float)sum/size);
    for(iter = size - 1 ; iter >= 0; iter--)
        printf("%d " , arr[iter]);


}