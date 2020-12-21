
/* problem statement: Write a program which accept string from user and accept one
character. Return index of last occurrence of that character. 

Input : “Marvellous Multi OS”
             M
Output : 11
Input : “Marvellous Multi OS”
                 W
Output : -1
Input : “Marvellous Multi OS”
             e
Output : 4 

*/

#include <stdio.h>

int LastChar(char str[], char ch)
{
    int iPos = -1;
    int i = 0;

    if (str == NULL || ch == '\0') //filter
    {
        return -1;
    }

    while (str[i] != '\0') // O(N)
    {
        if (str[i] == ch)
        {
            iPos = i;
        }

        i++;
    }

    return iPos;
}

int LastCharX(char *str, char ch)
{
    int iPos = -1;
    int i = 0;

    if (str == NULL || ch == '\0') //filter
    {
        return -1;
    }

    while (*str != '\0') // O(N)
    {
        if (*str == ch)
        {
            iPos = i;
        }

        i++;
        str++;
    }

    return iPos;
}

int main()
{
    char arr[30];
    char cValue = '\0';
    int iRet = 0;

    printf("enter the string\n");
    scanf("%[^'\n']s", arr);

    printf("enter the charcter\n");
    scanf(" %c", &cValue);

    // iRet = LastChar(arr, cValue);
    iRet = LastCharX(arr, cValue);
    printf("index of Last occurrence of that character is: %d\n", iRet);

    return 0;
}