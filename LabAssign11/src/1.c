#include <stdio.h>

void to_upper(char * str)
{
    int i = 0;
    for(i = 0 ; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] += 'A' - 'a';
    }
}

int main()
{
    char str[] = "hello world";
    to_upper(str);
    printf(str);
}