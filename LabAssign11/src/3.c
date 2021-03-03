#include <stdio.h>

void decToBin(int dec)
{
    char bin[33];
    int i = 0;
    for(i = 0; i < 32; i++)
        bin[i] = '0';
    bin[32] = '\0';
    for(i = 0 ; dec != 0 ; i++)
    {
        bin[31 - i] = (dec % 2 ) + '0';
        dec /= 2;
    }
    printf(bin);

}

int main()
{
    int dec;
    scanf("%d" , &dec); 
    decToBin(dec);
}