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

void transpose(int * mat , int x ,int y)
{
    int i = 0;
    int j = 0;
    printf("Transpose is: \n");
    for(i = 0; i < x; i++)
    {
        for(j = 0; j < y; j++) 
            printf("%d\t" , mat[i + x*j]);
        putchar('\n'); 
    }

}

int main()
{
    const int matrix_x = 2;
    const int matrix_y = 3;
    int matrix[matrix_x*matrix_y];
    input(matrix , matrix_x , matrix_y);
    transpose(matrix , matrix_x , matrix_y);
}