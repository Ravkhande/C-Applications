
/* problem statement: .Write a program which accept one number from user and count number of
ON (1) bits in it without using % and / operator.

Input : 11
Output : 3 
*/

#include "header1.h"

int CountOne(int iNo)
{
    int iCnt = 0, iResult = 0;
    int iMask = 0X00000001;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iResult = iNo & iMask;
        iNo = iNo >> 1;

        if (iResult == iMask)
        {
            iCnt++;
        }
    }

    return iCnt;
}
