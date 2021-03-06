
/* problem statement:  Write a program which accept one number from user and toggle 7th and
10th bit of that number. Return modified number.   */

#include <stdio.h>

int ToggleBit(int iNo)
{
    int iMask = 0X00000240;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    return (iNo ^ iMask);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    iRet = ToggleBit(iValue);

    printf("Modified number is : %d\n", iRet);

    return 0;
}
