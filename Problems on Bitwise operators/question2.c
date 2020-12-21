
/* problem statement: Write a program which checks whether 5th & 18th bit is On or OFF. */

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(int iNo)
{
    int iMask = 0X00020010;
    int iResult = 0;

    if (iNo < 0) //convertor
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
        printf("5th and 18th bit is on\n");
    }
    else
    {
        printf("5th and 18th bit is off\n");
    }
    return 0;
}
