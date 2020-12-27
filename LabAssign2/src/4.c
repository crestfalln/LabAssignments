



/*
4.	A Cashier has currency notes of denominations 10, 50 and 100.
    If the amount to be withdrawn is input through the keyboard in hundreds, find the total number of currency notes of each denomination the cashier will have to give to the withdrawer.
*/
#include <stdio.h>
int main()
{
    int amount_in_hundreds = 0;
    printf("Enter Ammount in Hundreds: ");
    scanf("%d" , &amount_in_hundreds);
    amount_in_hundreds*=100;                                                    //To get actual ammount
    printf("You get %d of domination 100 notes\n" , amount_in_hundreds/100);
    printf("You get %d of domination 50 notes\n", amount_in_hundreds/50);
    printf("You get %d of domination 10 notes", amount_in_hundreds/10);
}