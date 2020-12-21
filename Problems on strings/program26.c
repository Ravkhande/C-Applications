
/* Problem satement: Write a program which accept string from user count number of
words from string
Input : “Marvellous Multi OS”
Output : 3

Input : “ Marvellous Multi OS Pune”
Output : 4
*/

#include <stdio.h>

int WordCount(char *str)
{
    int iCnt = 1;
    if (str == NULL) //filter
    {
        return -1;
    }

    while (*str != '\0')
    {

        if (*str == ' ')
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char arr[70];
    int iRet = 0;

    printf("Enter the string\n");
    scanf("%[^'\n']s", arr);

    iRet = WordCount(arr);

    printf("Number of words from string is : %d\n", iRet);

    return 0;
}
