
/* Problem statement: Accept Character from user and check whether it is small case or
not (a-z). 
  */

#include <stdio.h> // for printf and scanf Library function

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if (ch >= 97 && ch <= 122)
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
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter the character\n");
    scanf("%c", &cValue);
    bRet = ChkSmall(cValue);
    if (bRet == TRUE)
    {
        printf("It is Small case character\n");
    }
    else
    {
        printf("It is not a Small case character\n");
    }

    return 0;
}