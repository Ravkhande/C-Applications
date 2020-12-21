
#include <stdio.h>

int Max(int iNo)
{
    static int iDigit = 0;

    if (iNo != 0)
    {
        if (iDigit < (iNo % 10))
        {
            iDigit = iNo % 10;
        }
        iNo = iNo / 10;
        Max(iNo);
        return iDigit;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = Max(iValue);

    printf("%d", iRet);
    return 0;
}