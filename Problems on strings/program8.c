
/* Problem statement: Write a program which accept string from user and accept one
character. Return index of first occurrence of that character.  

Input : “Marvellous Multi OS”
                 M
Output : 0 

Input : “Marvellous Multi OS”
             W
Output : -1
Input : “Marvellous Multi OS”
            e
Output : 4 

*/
#include <stdio.h>

int FirstChar(char str[], char ch)
{
    int iCnt = 0;
    int i = 0;

    if ((str == NULL) || (ch == '\0')) //filter
    {
        return -1;
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            break;
        }
    }

    if (str[i] == '\0')
    {
        return -1;
    }
    else
    {
        return i;
    }
}

int FirstCharX(char *str, char ch)
{
    int iCnt = 0;
    int i = 0;

    if ((str == NULL) || (ch == '\0')) //filter
    {
        return -1;
    }

    for (; *str != '\0'; str++)
    {
        if (*str == ch)
        {
            break;
        }
        i++;
    }

    if (*str == '\0')
    {
        return -1;
    }
    else
    {
        return i;
    }
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

    //iRet = FirstChar(arr, cValue);
    iRet = FirstCharX(arr, cValue);

    printf("index of first occurrence of that character is: %d\n", iRet);

    return 0;
}
