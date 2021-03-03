//#### 5. Write a C program to add list of values using command line arguments.
//```c
#include <stdio.h>
#include <stdlib.h>
int main(int argc , char** argv)
{
    int iter = 0;
    int sum = 0;
    for(iter = 1; iter < argc; iter++)
    {
        sum += strtol(argv[iter] , (char**)NULL , 10);
    }
    printf("Sum is %d." , sum);
}
//```