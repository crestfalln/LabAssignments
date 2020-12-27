



/*
Prints all possible ways different dominations can be given for input cash
*/

#include <stdio.h>

const int dominations[] = {100, 50, 10, 1};
int result[sizeof(dominations) * 2 / sizeof(int)];

void cashPerm(int cash, int stage)
{
    if (stage == sizeof(dominations) / sizeof(int) - 1)
    {
        if (cash % dominations[stage] != 0)
        {
            return;
        }
        result[stage * 2] = dominations[stage];
        result[stage * 2 + 1] = cash / dominations[stage];
        for (int i = 0; i < sizeof(result) / sizeof(int) - 1; i += 2)
        {
            if (result[i + 1] == 0)
            {
                continue;
            }
            printf("%d x %d  ", result[i], result[i + 1]);
        }
        printf("\n");
        return;
    }

    for (int i = 0; i <= cash / dominations[stage]; i++)
    {
        result[stage * 2] = dominations[stage];
        result[stage * 2 + 1] = i;
        cashPerm(cash - dominations[stage] * i, stage + 1);
    }
}

int main()
{
    int inputCash = 0;
    printf("Input amount: ");
    scanf("%d" , &inputCash);
    cashPerm(inputCash , 0);
}