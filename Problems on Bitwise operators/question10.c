
/* problem statement: Write a program which accept one number from user and on its first 4
bits. Return modified number.  */

#include <stdio.h>

typedef int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0X0000000F;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    return (iNo | iMask);
}

UINT main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    iRet = OnBit(iValue);

    printf("Modified number is : %d\n", iRet);
    return 0;
}