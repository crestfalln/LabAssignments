#include <stdio.h>
const int arr1_x = 2 , arr1_y = 2 , arr2_x = 2 , arr2_y = 2;
const int result_x = arr1_x , result_y = arr2_y;

void multiply(int arr_a[arr1_x][arr1_y] , int arr_b[arr2_x][arr2_y] , int result[result_x][result_y])
{
    int iter1 , iter3,  iter2;
    int temp = 0;
    for(iter1 = 0; iter1 < result_x; iter1++)
    {
        for(iter2 = 0; iter2 <= result_y; iter2++)
        {
            temp = 0;
            for(iter3 = 0; iter3 < arr1_y; iter3++)
                temp += (arr_a[iter1][iter3] * arr_b[iter3][iter1]); 
            result[iter1][iter2] = temp;
        }
    }
}

int main()
{
    if(arr1_y != arr2_x)
    {
        printf("Dimensions of Matrices not suitable for multiplication.");
        return 0;
    }
    int arr1[arr1_x][arr1_y], arr2[arr2_x][arr2_y] , result[result_x][result_y];
    int iter1 = 0, iter2 = 0;
    printf("Input First Matrix.\n");
    for(iter1 = 0; iter1 < arr1_x; iter1++)
    {
        printf("*****%d Row*****\n" , iter1 + 1);
        for(iter2 = 0; iter2 < arr1_y; iter2++)
        {
            printf("Enter Element No. %d: " , iter2 + 1);
            scanf("%d" , &arr1[iter1][iter2]);
        }
    }
    printf("Input Second Matrix.\n");
    for(iter1 = 0; iter1 < arr2_x; iter1++)
    {
        printf("*****%d Row*****\n" , iter1 + 1);
        for(iter2 = 0; iter2 < arr2_y; iter2++)
        {
            printf("Enter Element No. %d: " , iter2 + 1);
            scanf("%d" , &arr2[iter1][iter2]);
        }
    }
    multiply(arr1 , arr2 , result);

    for(iter1 = 0; iter1 < result_x; iter1++)
    {
        for(iter2 = 0; iter2 < result_y; iter2++)
        {
            printf("%d\t" , result[iter1][iter2]);
        }
        printf("\n");
    }
}