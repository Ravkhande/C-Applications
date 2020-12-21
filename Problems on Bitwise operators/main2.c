
#include "header2.h"

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iPos = 0;

    printf("Enter first number\n");
    scanf("%d", &iValue1);

    printf("Enter second number\n");
    scanf("%d", &iValue2);

    CommonBits(iValue1, iValue2);

    return 0;
}