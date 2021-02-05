#include <stdio.h>
int main()
{
    const char str[] = "Hello, World";
    int iter = 0;
    for (iter = sizeof(str) / sizeof(char) - 1; iter >= 0; iter--)
    {
        printf("%c", str[iter]);
    }
}