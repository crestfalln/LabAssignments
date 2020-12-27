



/*
3.	If the total selling price of 15 items and the total profit earned on them is input through the keyboard, write a C program to find the cost price of one item.
*/
#include <stdio.h>
int main()
{
    float sellPrice = 0;
    float totalProfit = 0;
    printf("Enter Selling Price: ");
    scanf("%f" , &sellPrice);
    printf("Enter total profit: ");
    scanf("%f" , &totalProfit);
    printf("Selling price of one item is: %0.2f" , (sellPrice - totalProfit)/15);
}