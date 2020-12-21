
/* problem statement: Write a program which checks whether 7th & 8th & 9th bit is On or
OFF.  */

#include <stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(int iNo)
{
    int iMask = 0X000001C0;
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
        printf("7th & 8th & 9th bit is On\n");
    }
    else
    {
        printf("7th & 8th & 9th bit is Off\n");
    }
    return 0;
}
