#include <stdio.h>

const int size_x = 2, size_y = 2;
int matrix1[size_x][size_y], matrix2[size_x][size_y], sum[size_x][size_y];

void iterator(void (*func)(int , int , int[][size_y]) , int matri[size_x][size_y])
{
    int iter_x, iter_y;
    for (iter_x = 0; iter_x < size_x; iter_x++)
    {
        for (iter_y = 0; iter_y < size_y; iter_y++)
            func(iter_x , iter_y , matri);
    }
}

void _input_matrix(int iter_x , int iter_y, int matri[size_x][size_y])
{
    scanf("%d" , &matri[iter_x][iter_y]);
}

void _sum(int iter_x , int iter_y, int matri[size_x][size_y])
{
    matri[iter_x][iter_y] = matrix1[iter_x][iter_y] + matrix2[iter_x][iter_y];
}

void _print(int iter_x , int iter_y, int matri[size_x][size_y])
{
    if(iter_y % size_y == 0)
        putchar('\n');
    printf("%d\t" , matri[iter_x][iter_y]);
}

int main()
{
    iterator(_input_matrix , matrix1);
    iterator(_input_matrix , matrix2);
    iterator(_sum , sum);
    iterator(_print , sum);
}
