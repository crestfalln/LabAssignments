#include <stdio.h>

const int size_x = 2, size_y = 2;
int matrix1[size_x][size_y], matrix2[size_x][size_y], sum[size_x][size_y];

void iterator(int (*func)())
{
    int iter_x, iter_y;
    for (iter_x = 0; iter_x < size_x; iter_x++)
    {
        for (iter_y = 0; iter_y < size_y; iter_y++)
            func(iter_x , iter_y);
    }
}
int main()
{
    printf("Input Second Matrix\n");
    for (iter_x = 0; iter_x < size_x; iter_x++)
    {
        for (iter_y = 0; iter_y < size_y; iter_y++)
            scanf("%d", &matrix2[iter_x][iter_y]);
    }
    for (iter_x = 0; iter_x < size_x; iter_x++)
    {
        for (iter_y = 0; iter_y < size_y; iter_y++)
            sum[iter_x][iter_y] = matrix1[iter_x][iter_y] + matrix2[iter_x][iter_y];
    }
    for (iter_x = 0; iter_x < size_x; iter_x++)
    {
        printf("\n");
        for (iter_y = 0; iter_y < size_y; iter_y++)
            printf("%d\t", sum[iter_x][iter_y]);
    }
}