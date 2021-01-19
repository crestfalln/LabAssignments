



/*
2.	Write a C Program to print full Pyramid of numbers
      1
         2 3 2
      3 4 5 4 3
   4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SPACE ' '
int main()
{
   const int maxStage = 5;
   int stage = 1;
   int i = 1 , n = 0;
   for (n = 0; n < 2 * (maxStage - stage); n++)
      printf(" ");
   for (int i = 1; i <= maxStage * 2 - 1; i++)
   {
      if (i == stage * 2 - 1)
      {
         for (; i >= stage; i--)
            printf("%d ", i);
         printf("\n");
         i = stage * 2 - i;
         stage++;
         for (n = 0; n < 2 * (maxStage - stage); n++)
            printf(" ");
         if (stage > maxStage)
            break;
      }
      printf("%d ", i);
   }
}
