
/* problem statement: Write a program which 2 strings from user and check whether first
N contents of two strings are equal or not. (Implement strcmp()
function).

Note : If third parameter is greater than the size of second string then
concat whole string after first string.

Input : “Marvellous Infosystems”
 “Marvellous Logic Building”
 10
Output : TRUE 
*/

#include <stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL StrNCmpX(char *src, char *dest, int iCnt)
{
    if ((src == NULL) || (dest == NULL))
    {
        return FALSE;
    }

    while (((*src != '\0') && (*dest != '\0')) && (iCnt != 0))
    {
        if (*src == *dest)
        {
            src++;
            dest++;
        }
        else
        {
            break;
        }

        iCnt--;
    }

    if (((*src == '\0') && (*dest == '\0')) || (src == dest) || iCnt == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char arr[50];
    char brr[50];
    BOOL bRet = FALSE;
    int iNo = 0;

    printf("Enter the first string:\n");
    scanf("%[^'\n']s", arr);

    printf("Enter the second string:\n");
    scanf(" %[^'\n']s", brr);

    printf("Enter the N number :\n");
    scanf(" %d", &iNo);

    bRet = StrNCmpX(arr, brr, iNo);

    if (bRet == TRUE)
    {
        printf("Both strings are equal\n");
    }
    else
    {
        printf("Both strings are not equal\n");
    }

    return 0;
}
