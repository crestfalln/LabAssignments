



/*
4.	Write a C Program to find largest of given three numbers.
*/
#include <stdio.h>
int main()
{
   int input1 , input2 , input3;
   scanf("%d%d%d" , &input1 , &input2 , &input3);
   if(input1 < input2)
   {
       if(input2 < input3)
            printf("\n%d" , input3);
        else
            printf("\n%d" , input2);
   }
   else
   {
       if(input1 < input3)
            printf("\n%d" , input3);
        else
            printf("\n%d" , input1);
   }
}