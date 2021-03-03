//#### 3. Differentiate between Unions and Structures in C with three members of each of type integer, float and character string.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union
{
    int integer;
    float floatingPoint;
    char string[100];
} Union;

typedef struct
{
    int integer;
    float floatingPoint;
    char string[100];
} Struct;

void input(Struct* S , Union* U)
{
    const size_t inputbuffSize = 100;
    char inputbuff[inputbuffSize];
    printf("Input Struct: \n");
    printf("\tEnter Integer: ");
    fgets(inputbuff , inputbuffSize - 2, stdin);
    S->integer = strtol(inputbuff , (char**)NULL , 10);
    printf("\tEnter Floating-Point Number: ");
    fgets(inputbuff , inputbuffSize - 2, stdin);
    S->floatingPoint = strtod(inputbuff , (char**)NULL);
    printf("\tEnter String: ");
    fgets(inputbuff , inputbuffSize - 2, stdin);
    strcpy(S->string , inputbuff);
    printf("Input Union: \n");
    printf("\tEnter Integer: ");
    fgets(inputbuff , inputbuffSize - 2, stdin);
    U->integer = strtol(inputbuff , (char**)NULL , 10);
    printf("\tEnter Floating-Point Number: ");
    fgets(inputbuff , inputbuffSize - 2, stdin);
    U->floatingPoint = strtod(inputbuff , (char**)NULL);
    printf("\tEnter String: ");
    fgets(inputbuff , inputbuffSize - 2, stdin);
    strcpy(U->string , inputbuff);
    return;
}

int main()
{
    Struct Struct1;
    Union Union1;
    printf("Struct Stores all the varialbes seprately, while union only store one.\n");
    printf("Size of Struct: %d bytes,\nSize of Union: %d bytes\n" , sizeof(Struct1) , sizeof(Union1));
    printf("Give input: \n");
    input(&Struct1 , &Union1);
    printf("\nOutput:\n");
    printf("Struct:\n");
    printf("\tInteger: %d\n" , Struct1.integer);
    printf("\tFloating-Point Number: %f\n" , Struct1.floatingPoint);
    printf("\tString: %s" , Struct1.string);
    printf("Union:\n");
    printf("\tInteger: %d\n" , Union1.integer);
    printf("\tFloating-Point Number: %f\n" , Union1.floatingPoint);
    printf("\tString: %s" , Union1.string);
    return 0;
}