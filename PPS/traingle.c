#include <stdio.h>
int main()
{
    double side1, side2, side3;
    double angle1, angle2, angle3;
    bool choice;                    // choice true:side false:angle
    int temp;
    printf("Choose Side(0) or Angle(1)    (0/1)\n");
    scanf("%d", &temp);
    choice = temp;
    if(choice)
    {
        printf("Input Angles in degrees");
        scanf("%f%f%f" , angle1 , angle2 , angle3);
        if(angle1+angle2+angle3 == 180)
        {
            printf("Makes a triangle\n");
            if(angle1 == angle2 || angle2 == angle3 || angle1 == angle3)
            {
                if(angle2 == angle3 == angle1)
                {
                    printf("Is Equilateral\n");
                    printf("Is acute");
                }
                else
                {
                    printf("Is Isoceles\n");
                    for(angle)

                }
            }
            else 
            {
                printf("Is Scalene"); 
            }
            
        }
        else
        {
            printf("It is not a traingle");
        }
    }
}