



/*
2.	Length and breadth of a Rectangle and Radius of a Circle are input through keyboard. Write a C program to calculate area & perimeter of rectangle and then calculate area and circumference of the circle. 
Hint: Area of Rectangle is: l * b and Perimeter of Rectangle is: 2* (l+b)
           Area of Circle is: π * radius * radius  and Circumference of Circle is: 2* π * radius 
*/

#include <stdio.h>
int main()
{
    const float pi = 3.14;
    float length = 0;
    float breadth = 0;
    float radius = 0;
    printf("Enter Length: ");
    scanf("%f" , &length);
    printf("Enter Breadth: ");
    scanf("%f" , &breadth);
    printf("Enter radius: ");
    scanf("%f" , &radius);
    printf("Area of Rectangle: %0.2f\nPerimeter of Rectangle: %0.2f\nArea of Circle: %0.2f\nCircumference of Circle: %0.2f\n" 
                                            , length*breadth , length+breadth , pi*radius*radius , 2*pi*radius);
}