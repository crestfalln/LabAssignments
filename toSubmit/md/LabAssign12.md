# [Pull with Git?](https://github.com/crestfalln/LabAssignments.git)

#### 1.  Write a C program to add two complex numbers by passing structure to a function. 
```c
#include <stdio.h>

typedef struct
{
    float real;
    float img;
} complex;

void complex_sum(complex *num1, complex *num2)
{
    printf("Sum = %0.3f + (%0.3fi)", num1->real + num2->real, num1->img + num2->img);
}

int main()
{
    complex num1, num2;
    printf("For 1st complex number:\nEnter the real and imaginary parts: ");
    scanf("%f %f", &num1.real, &num1.img);
    printf("For 2st complex number:\nEnter the real and imaginary parts: ");
    scanf("%f %f", &num2.real, &num2.img);
    complex_sum(&num1 , &num2);
    return 0;
}
```
>**Input:**    
>2 1    
>3 1    
>**Output:**    
>5 + (2)i  

#### 2. Write a C program to store information of two students (student_name, roll_no, marks) using array of structures. 
```c
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
```
>**Input:**   
>Enter Student no. 1 details:  
>Name: Sham  
>Roll No: 1  
>Marks: 95  
>Enter Student no. 2 details:  
>Name: Ram  
>Roll No: 2  
>Marks: 90  
>**Output:**  
>Output:  
>Name: Ram  
>Roll No: 1  
>Marks: 95  
>Name: Sham  
>Roll No: 2  
>Marks: 90  
>  

#### 3. Write a function in C to count the number of Vowels, Consonants, digits and white-spaces in a string entered by the user 
```c
#include <stdio.h>
#include <string.h>

int find(char c , const char target[])
{
    int i = 0;
    for(i = 0; target[i] != '\0'; i++)
    {
        if(c == target[i])
            return 1;
    }
    return 0;
}

void stringCount(char* str)
{
    static const char vowels[] = "aeiouAEIOU";
    int iter = 0;
    int cVowels = 0 , cDigits = 0 , cConsonants = 0 , cWhiteSpaces = 0;
    for(iter = 0; str[iter] != '\0'; iter++)
    {
        if(find(str[iter] , vowels))
            cVowels++;
        else if((str[iter] >= 'a' && str[iter] <= 'z') || (str[iter] >= 'A' && str[iter] <= 'Z'))
            cConsonants++;
        else if(str[iter] >= '0' && str[iter] <= '9')
            cDigits++;
        else if(str[iter] == ' ')
            cWhiteSpaces++;
    }
    printf("Vowels : %d,\nConsonants : %d,\nDigits : %d,\nWhitespaces : %d\n" , cVowels , cConsonants , cDigits , cWhiteSpaces);
}

int main()
{
    char str[100];
    fgets(str , 98 , stdin);
    stringCount(str); 
    return 0;
}
```
>**Input:**   
>Enter String: Hello, World  
>**Output:**  
>Vowels : 3,  
>Consonants : 7,  
>Digits : 0,  
>Whitespaces : 1  
>
#### 4. Write a function in C to find the frequency of a character in a String.
```c
#include <stdio.h>

int str_chr_freq(const char* str , const char chr)
{
    int iter = 0;
    int count = 0;
    for(iter = 0 ; str[iter] != '\0'; iter++)
    {
        if(str[iter] == chr)
            count++;
    }
    return count;
}
void stdin_flush(void) //Never Used Remove this!!?
{
    while(getc(stdin) != '\n');
}

int main()
{
    const size_t strInSize = 50;
    char strIn[strInSize];
    printf("Enter the string: ");
    fgets(strIn , strInSize - 2 , stdin);
    printf("Enter the character: ");
    printf("The number of repitions is: %d" , str_chr_freq(strIn , getchar()));
    return 0;
}
```
>**Input:**  
>Enter the string: Hello, World  
>**Output:**  
>Enter the character: l  
>The number of repitions is: 3  
>

#### 5. Write a C program to find factorial of a Number Using Recursion.
```c
#include <stdio.h>
#include <stdlib.h>

unsigned long factorial(int n)
{
    if(n == 1 || n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    const size_t inputbuffSize = 100;
    char inputbuff[inputbuffSize];
    printf("Enter number to find factorial: ");
    fgets(inputbuff , inputbuffSize - 2 , stdin);
    int input = strtol(inputbuff, (char**)NULL , 10);
    printf("Factorial is: %ld\n" , factorial(input)); 
    return 0;
}
```
>**Input:**  
>Enter number to find factorial: 6  
>**Output:**  
>Factorial is: 720  
>