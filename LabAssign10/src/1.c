#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const unsigned int STRINGS_NUMBER = 5;
const size_t STRING_MAX_SIZE = 30;

char *input(void);
int string_size(char *);
char *longest_string(char *stringArray[]);
void largest_str(char strings[STRINGS_NUMBER][STRING_MAX_SIZE]);

int main()
{
    int i = 0;
    char strings[STRINGS_NUMBER][STRING_MAX_SIZE];
    char *stringArray[STRINGS_NUMBER];
//    for (i = 0; i < STRINGS_NUMBER; i++)
    {
 //       stringArray[i] = input();
    }
    largest_str(strings);
    stringArray[i] = (char*)NULL;
    printf(longest_string(stringArray));
}

char *input(void)
{
    char* buff = (char*)malloc(30);
    printf("Input String (Warning Max string length is 29 characters): ");
    scanf("%s", buff);
    return buff;
}

char *longest_string(char *stringArray[])
{
    int i = 0;
    char *largest = stringArray[0];
    for (i = 1; stringArray[i] != (char*)NULL; i++)
    {
        if (strlen(largest) < strlen(stringArray[i]))
            largest = stringArray[i];
    }
    return largest;
}

void largest_str(char strings[STRINGS_NUMBER][STRING_MAX_SIZE])
{
    int i = 0;
    for(i = 0; i < STRINGS_NUMBER; i++)
        scanf("%s" , strings[i]);
}