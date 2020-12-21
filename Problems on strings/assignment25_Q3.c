
/* Problem Statement: WAP which Accept Character from user and check whether it is digit or not
(0-9).    */

#include <stdio.h> // for printf and scanf Library function

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigit(char ch)
{

    
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter the character\n");
    scanf("%c", &cValue);
    bRet = ChkDigit(cValue);
    if (bRet == TRUE)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is not a Digit\n");
    }

    return 0;
}