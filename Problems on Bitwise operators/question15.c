
/* problem statement:  Write a program which accept one number from user and toggle contents
of first and last nibble of the number. Return modified number. (Nibble is a
group of four bits) 
 */

#include <stdio.h>

typedef unsigned int UINT;
UINT ToggleBit(UINT iNo)
{
    int iMask = 0XF000000F;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    return (iNo ^ iMask);
}

int main()
{
    int iValue = 0;
    UINT iRet = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    iRet = ToggleBit(iValue);

    printf("Modified number is : %u\n", iRet);
    return 0;
}

/* 1111 0000 0000 0000 0000 0000 1000 0110    */