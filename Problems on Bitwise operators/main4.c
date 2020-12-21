
#include "header4.h"

int main()
{
    int iValue = 0;
    int iPos1 = 0, iPos2 = 0;
    BOOL bRet = FALSE;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    printf("Enter the positions\n");
    scanf("%d %d", &iPos1, &iPos2);

    bRet = ChkBit(iValue, iPos1, iPos2);

    if (bRet == TRUE)
    {
        printf("1st or 2nd Position bit is ON\n");
    }
    else
    {
        printf("1st or 2nd Position bit is Off\n");
    }

    return 0;
}