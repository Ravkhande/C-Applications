
/* problem statement:  Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters. 
*/

#include <stdio.h>

int Difference(char str[])
{
    int iCapital = 0;
    int iSmall = 0;
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            iCapital++;
        }
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            iSmall++;
        }
        i++;
    }

    return (iSmall - iCapital);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string\n");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("frequency of small characters and frequency of capital characters are:%d\n", iRet);

    return 0;
}