#include <stdio.h>

void val_swap(int , int );
void ref_swap(int* , int*);

int main()
{
    int a , b;
    scanf("%d %d" , &a , &b);
    printf("Not Swapped: %d %d \n" , a , b);
    val_swap(a , b);
    ref_swap(&a , &b);
    printf("Not Swapped: %d %d \n" , a , b);

}

void val_swap(int num1, int num2)
{
    printf("Val Swap: %d %d \n" , num2 , num1);
}

void ref_swap(int* ptr1 , int* ptr2)
{
    int tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
}