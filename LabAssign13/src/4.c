//#### 4. Write a C program to copy contents of one text file to another text file.
#include <stdio.h>
#include <stdlib.h>

//Buffered
int copy(FILE *to, FILE *from)
{
    const size_t buffSize = 1024;
    char* buffer = (char*)malloc(sizeof(char)*buffSize);
    char ch;
    int count = 0;
    int iterations = 0;
    while (1)
    {
        if (count >= buffSize)
        {
            fwrite((void *)buffer, 1024, 1, to);
            count = 0;
        }
        buffer[count] = getc(from);
        if (buffer[count] == EOF)
            break;
        count++;
    }
    fwrite((void *)buffer, count, 1, to);
    printf("Total %d bytes read and written" , iterations*buffSize+count);
}

//Unbuffered 
/*
int copy(FILE *to, FILE *from)
{
    char ch = getc(from);
    int count = 0;
    while (ch != EOF)
    {
        putc(ch , to);
        count++;
        ch = getc(from);
    }
    printf("%d Bytes Written" , count);
}
*/


int main()
{
    FILE *from = fopen("../Files/quotes_from_stormlight.txt", "r");
    FILE *to = fopen("../Files/copy.txt", "w");
    if(from == (FILE*)NULL || to == (FILE*)NULL)
    {
        printf("Cannot Open File for reading or writing");
        return 0;
    }
    copy(to, from);
    fclose(to);
    fclose(from);
    return 0;
}
