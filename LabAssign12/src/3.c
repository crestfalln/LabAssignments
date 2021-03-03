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
    printf("Enter String: ");
    fgets(str , 98 , stdin);
    stringCount(str); 
}