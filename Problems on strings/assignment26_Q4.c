
/* Problem statement:  Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).  
  */

#include <stdio.h> // for printf and scanf Library function

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter the character\n");
    scanf("%c", &cValue);
    bRet = ChkSpecial(cValue);
    if (bRet == TRUE)
    {
        printf("It is special Character");
    }
    else
    {
        printf("It is not a special Character");
    }

    return 0;
}