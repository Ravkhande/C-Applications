
#include "header1.h"

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    iRet = CountOne(iValue);

    printf("Number of ON bits are: %d\n", iRet);

    return 0;
}