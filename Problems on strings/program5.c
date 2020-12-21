
/* problem sttatement: Write a program which accept string from user and count number of
white spaces
Input : “MarvellouS”
Output : 0
Input : “MarvellouS Infosystems”
Output : 1
Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
Output : 5 
*/

#include <stdio.h>

int CountWhite(char str[])
{
    int iCnt = 0;
    int i = 0;

    if (str == NULL) //filter
    {
        return -1;
    }

    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            iCnt++;
        }
        i++;
    }

    return iCnt;
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);
    printf("%d", iRet);

    return 0;
}
