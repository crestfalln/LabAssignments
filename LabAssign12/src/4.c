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
}