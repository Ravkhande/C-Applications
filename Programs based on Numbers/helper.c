#include "header.h"

void PrintEven(int iNo)
{
    int iCnt = 0;
    if (iNo <= 0)
    {
        return;
    }

    for (iCnt = 1; iCnt <= iNo * 2; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}