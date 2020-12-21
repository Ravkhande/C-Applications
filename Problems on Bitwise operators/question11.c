
/* problem statement: Write a program which accept one number and position from user and
check whether bit at that position is on or off. If bit is on return TURE
otherwise return FALSE.

Input : 10 2
Output : TRUE 
  */

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(int iNo, int iPos)
{
    int iResult = 0;
    int iMask = 0X00000001;

    if (iNo < 0) //convertor
    {
        iNo = -iNo;
    }

    if ((iPos < 0) || (iPos > 32)) //filter
    {
        return FALSE;
    }

    iMask = iMask << (iPos - 1);

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
    int iValue = 0, iPos = 0;
    BOOL bRet = FALSE;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    printf("Enter the position\n");
    scanf("%d", &iPos);

    bRet = ChkBit(iValue, iPos);

    if (bRet == TRUE)
    {
        printf("Bit is on at that position\n");
    }
    else
    {
        printf("Bit is off at that position\n");
    }

    return 0;
}