




#include <stdio.h>

const int size_x = 2, size_y = 2;
int matrix1[size_x][size_y], matrix2[size_x][size_y], sum[size_x][size_y], sub[size_x][size_y];

int main()
{
    int iter_x, iter_y;
    printf("Enter First Matrix\n");
    for (iter_x = 0; iter_x < size_x; iter_x++)
    {
        for (iter_y = 0; iter_y < size_y; iter_y++)
        {
            printf("%d:%d Element: ", iter_x+1, iter_y+1);
            scanf("%d", &matrix1[iter_x][iter_y]);
        }
    }
    printf("Enter Second Matrix\n");
    for (iter_x = 0; iter_x < size_x; iter_x++)
    {
        for (iter_y = 0; iter_y < size_y; iter_y++)
        {
            printf("%d:%d Element: ", iter_x+1, iter_y+1);
            scanf("%d", &matrix2[iter_x][iter_y]);
        }
    }
    for (iter_x = 0; iter_x < size_x; iter_x++)
    {
        for (iter_y = 0; iter_y < size_y; iter_y++)
            sum[iter_x][iter_y] = matrix1[iter_x][iter_y] + matrix2[iter_x][iter_y];
    }
    for (iter_x = 0; iter_x < size_x; iter_x++)
    {
        for (iter_y = 0; iter_y < size_y; iter_y++)
            sub[iter_x][iter_y] = matrix1[iter_x][iter_y] - matrix2[iter_x][iter_y];
    }
    printf("Sum Matrix: \n");
    for (iter_x = 0; iter_x < size_x; iter_x++)
    {
        for (iter_y = 0; iter_y < size_y; iter_y++)
        {
            if (iter_y % size_y == 0)
                putchar('\n');
            printf("%d\t", sum[iter_x][iter_y]);
        }
    }
    printf("\nSub Matrix: \n");
    for (iter_x = 0; iter_x < size_x; iter_x++)
    {
        for (iter_y = 0; iter_y < size_y; iter_y++)
        {
            if (iter_y % size_y == 0)
                putchar('\n');
            printf("%d\t", sub[iter_x][iter_y]);
        }
    }
}
