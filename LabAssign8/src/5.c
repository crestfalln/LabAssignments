



/*
5.	Write a C program to count the number of blanks, tabs and newlines in the input (Switch case can be used)
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int blanks = 0, tabs = 0, new_lines = 0;
    char ch = 0;
    while (ch != EOF)
    {
        ch = getc(stdin);
        switch (ch)
        {
        case ' ':
            blanks++;
            break;
        case '\t':
            tabs++;
            break;
        case '\n':
            new_lines++;
            break;
        default:
            break;
        }
    }
    printf("Blanks: %d, Tabs: %d, New Lines: %d." , blanks , tabs , new_lines);
}