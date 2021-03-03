#include <stdio.h>

void input(int * mat , int x ,int y)
{
    int i = 0;
    for(i = 0; i < x*y; i++)
    {
        printf("Enter Element %d:%d : " , i / x + 1 , i%x + 1);
        scanf("%d" , mat + i);
    }
    
}

char check(int *mat, int x, int y)
{
    int i, j;
    for (i = 0; i < y; i++)
    {
        for (j = 0; j < x; j++)
        {
            if (i == j)
            {
                if (mat[i * y + j] != 1)
                    return 0;
            }
            else if (mat[i * y + j] != 0)
                return 0;
            else
                continue;
        }
    }
    return 1;
}

int main()
{
    const int matrix_x = 3;
    const int matrix_y = 3;
    int matrix[matrix_x*matrix_y];
    input(matrix , matrix_x , matrix_y);
    if(check(matrix , matrix_x , matrix_y))
    {
        printf("\nIdentity Matrix found.");
        return 0;
    }
    printf("\nNot an Identity matrix");
    return 0;
}
