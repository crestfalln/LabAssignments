#include <stdio.h>

typedef struct
{
    char name[50];
    int marks;
    char roll[50];
} student;

int main()
{
    int iter = 0;
    student students[2];
    for (iter = 0; iter < 2; iter++)
    {
        printf("Enter Student no. %d details:\n" , iter+1);
        printf("Name: ");
        scanf(" %s", (students + iter)->name);
        printf("Roll No: ");
        scanf(" %s", (students + iter)->roll);
        printf("Marks: ");
        scanf("%d", &(students + iter)->marks);
    }
    printf("\n\nOutput:\n");
    for (iter = 0; iter < 2; iter++)
    {
        printf("Student no. %d details:\n" , iter+1);
        printf("Name: %s\n" , (students+iter)->name);
        printf("Roll No: %s\n" , (students+iter)->roll);
        printf("Marks: %d\n" , (students+iter)->marks);
    }
    return 0;

}