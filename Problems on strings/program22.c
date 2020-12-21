
/* problem statement: Write a program which 2 strings from user and check whether
contents of two strings are equal or not. (Implement strcmp()
function).

Input : “Marvellous Infosystems”
         “Marvellous Infosystems”
Output : TRUE 
*/

#include <stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL StrCmpX(char *src, char *dest)
{

    if ((src == NULL) || (dest == NULL))
    {
        return FALSE;
    }

    while ((*src != '\0') && (*dest != '\0'))
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
    }

    if (((*src == '\0') && (*dest == '\0')) || ((src == dest)))
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
    char arr[30];
    char brr[30];
    BOOL bRet = FALSE;

    printf("Enter the first string\n");
    scanf("%[^'\n']s", arr);

    printf("Enter the second string\n");
    scanf(" %[^'\n']s", brr);

    bRet = StrCmpX(arr, brr);

    if (bRet == TRUE)
    {
        printf("Contents of both the string is same\n");
    }
    else
    {
        printf("Contents of both the string is not same\n");
    }

    return 0;
}
