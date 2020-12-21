
/* problem statement: Write a program which checks whether 15th bit is On or OFF. 
*/

#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(int iNo)
{
    int iMask = 0X00004000;
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
        printf("15th bit is on\n");
    }
    else
    {
        printf("15th bit is off\n");
    }

    return 0;
}