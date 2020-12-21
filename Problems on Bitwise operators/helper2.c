
/* problem statement: Write a program which accept two numbers from user and display position
of common ON bits from that two numbers.

Input : 10 15 (1010 1111)
Output : 2 4 
*/

#include "header2.h"

void CommonBits(int iNo1, int iNo2)
{
    int iResult1 = 0, iResult2 = 0, iPos = 1;
    int iMask = 0X00000001;

    if (iNo1 < 0)
    {
        iNo1 = -iNo1;
    }

    if (iNo2 < 0)
    {
        iNo2 = -iNo2;
    }

    while ((iNo1 != 0) && (iNo2 != 0))
    {
        iResult1 = iNo1 & iMask;
        iResult2 = iNo2 & iMask;

        if ((iResult1 != 0) && (iResult2 != 0))
        {
            printf("%d\t", iPos);
        }
        iPos++;

        iNo1 = iNo1 >> 1;
        iNo2 = iNo2 >> 1;
    }
}