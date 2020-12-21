
/* Problem Statement: Write a program which accept string from user and count number of
capital characters.  */

#include <stdio.h>

int CountCapital(char str[])
{
    int iCnt = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            iCnt++;
        }
        i++;
    }

    return iCnt;
}

int main()
{
    char arr[30]; //static memory allocation of array
    int iRet=0;

    printf("enter the string\n");
    scanf("%[^'\n']", arr);

    iRet = CountCapital(arr);

    printf("Count of capital characters are:%d\n", iRet);
    return 0;
}