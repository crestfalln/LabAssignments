




/*
2.	If the marks obtained by a student in five different subjects are input through the keyboard, find out the aggregate marks and percentage marks obtained by the student.
         Assume that the maximum marks that can be obtained by a student in each subject is 100. 
*/

#include <stdio.h>
int main()
{
    int aggMarks= 0; 
    int temp , count = 0;
    printf("Enter Marks of each Subject\n");
    while (count != 5)
    {
        scanf("%d" , &temp);
        aggMarks+=temp;
        count++;
    }

    printf("Aggregate marks are: \n%d\nPercent Marks are: \n%0.2f" , aggMarks , count , (float)(aggMarks)*100/(count*100));
}