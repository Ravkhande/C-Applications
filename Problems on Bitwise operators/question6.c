
/* problem statement: Write a program which accept one number from user and off 7th bit of that
number if it is on. Return modified number.  */

#include <stdio.h>

int OffBit(int iNo)
{
    int iMask = 0XFFFFFFBF;

    if (iNo < 0) //convertor
    {
        iNo = -iNo;
    }

    return (iNo & iMask);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    iRet = OffBit(iValue);

    printf("%d\n", iRet);

    return 0;
}
