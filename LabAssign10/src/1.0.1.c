#include <stdio.h>
#include <string.h>

const unsigned int STRINGS_NUMBER = 5;
const size_t MAX_STRING_SIZE = 30; 

char* largest_string(char(*)[MAX_STRING_SIZE]);

int main()
{
    int i = 0;
    char stringArray[STRINGS_NUMBER][MAX_STRING_SIZE];
    printf("WARNING: MAX BUFFER SIZE IS SET TO %d. ANY STRING CONTAINING MORE THAN %d CHARACTERS WILL CAUSE AN OVERFLOW.\n" , MAX_STRING_SIZE , MAX_STRING_SIZE - 1); 
    printf("Input %d newline terminated strings: \n" , STRINGS_NUMBER);
    for(i = 0 ; i < STRINGS_NUMBER; i++)
        scanf("%s" , *(stringArray + i));   //fgets would be safer and better.
    printf(largest_string(stringArray));
}

char* largest_string(char strArr[][MAX_STRING_SIZE])
{
    char* tmp = strArr[0]; 
    int i = 0;
    for(i = 0 ; i < STRINGS_NUMBER; i++)
    {
        tmp = strlen(tmp) < strlen(strArr[i]) ? strArr[i] : tmp; 
    }
    return tmp;
}
