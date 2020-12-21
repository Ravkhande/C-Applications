
/* Problem statement:  Write a program which accept string from user and count number of
small characters. */

#include <stdio.h>

int CountSmall(char str[])
{
    int iCnt = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            iCnt++;
        }
        i++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string\n");
    scanf("%[^'\n']s", arr);

    iRet = CountSmall(arr);

    printf("Count of small characters are:%d\n", iRet);

    return 0;
}