
/* problem satement:  Accept string from user and check whether the string is palindrome
or not without considering its case.

Input : “1abccBA1”
Output : TRUE 
*/

#include <stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL StrPallindrome(char *str)
{
    char *cStart = str, *cEnd = str; // both points to first character
    char ctemp = '\0';

    while (*cEnd != '\0')
    {
        cEnd++;
    }
    cEnd--;

    while (cStart < cEnd)
    {
        ctemp = *cStart;
        *cStart = *cEnd;
        *cEnd = ctemp;

        str++;
        cStart++; //1ABccba1
        cEnd--;
    }

    char *revstr = str;

    if (str == revstr)
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
    BOOL bRet = FALSE;
    char arr[30];

    printf("Enter the string\n");
    scanf("%[^'\n']s", arr);

    bRet = StrPallindrome(arr);

    if (bRet == TRUE)
    {
        printf("String is pallindrome\n");
    }
    else
    {
        printf("String is not pallindrome\n");
    }

    return 0;
}
