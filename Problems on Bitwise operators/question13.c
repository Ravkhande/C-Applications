
/* problem statement:   Write a program which accept one number and position from user and on
that bit. Return modified number.

Input : 10 3
Output : 14    
*/

#include <stdio.h>

int OnBit(int iNo, int iPos)
{
    int iMask = 0X00000001;
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if ((iPos < 1) && (iPos > 32))
    {
        return 0;
    }

    iMask = iMask << (iPos - 1);

    return (iNo | iMask);
}

int main()
{
    int iValue = 0, iPos = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    printf("Enter the position\n");
    scanf("%d", &iPos);

    iRet = OnBit(iValue, iPos);

    printf("Modified number is :%d\n", iRet);
    return 0;
}