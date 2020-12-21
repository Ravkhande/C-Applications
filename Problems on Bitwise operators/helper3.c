
/* problem statement:  Write a program which accept one number from user and check whether
9th or 12th bit is on or off.

Input : 257
Output : TRUE
*/

#include "header3.h"

BOOL ChkBit(int iNo)
{
    int iMask = 0X00000001;
    int iMask1 = 0, iMask2 = 0;
    int iResult1 = 0;
    int iResult2 = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    iMask1 = iMask << 8;
    iMask2 = iMask << 11;

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;

    //  check       9th        or       12th     bit is ON or off
    if ((iResult1 == iMask1) || (iResult2 == iMask2))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
