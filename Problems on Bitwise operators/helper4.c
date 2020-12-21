
#include "header4.h"

BOOL ChkBit(int iNo, int iPos1, int iPos2)
{
    int iMask = 0X00000003;
    int iResult = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if (((iPos1 < 1) || (iPos1 > 32)) || ((iPos2 < 1) || (iPos2 > 32)))
    {
        return FALSE;
    }

    iResult = iNo | iMask;

    if (iResult == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
