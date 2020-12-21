
#include "header3.h"

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    bRet = ChkBit(iValue);

    if (bRet == TRUE)
    {
        printf("9th Or 12th bit is ON\n");
    }
    else
    {
        printf("9th or 12th bit is off\n");
    }

    return 0;
}