
/* problem statement: Write a program which checks whether first and last bit is On or
OFF. First bit means bit number 1 and last bit means bit number 32. */

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(int iNo)
{
    int iMask = 0X80000001;
    int iResult = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    iResult = iNo & iMask;

    if (iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    bRet = ChkBit(iValue);

    if (bRet == TRUE)
    {
        printf("first and Last bit is On\n");
    }
    else
    {
        printf("first and Last bit is Off\n");
    }
    return 0;
}
