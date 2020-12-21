
/* problem statement:  Write a program which accept string from user and check whether
it contains vowels in it or not.  */

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char *str)
{

    while (*str != '\0')
    {
        if ((*str == 'a' || *str == 'A') || (*str == 'e' || *str == 'E') || (*str == 'i' || *str == 'I') || (*str == 'o' || *str == 'O') || (*str == 'u' || *str == 'U'))
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

int main()
{
    char arr[30];
    BOOL bRet = FALSE;
    printf("Enter the string\n");
    scanf("%[^'\n']s", arr);

    bRet = ChkVowel(arr);

    if (bRet == TRUE)
    {
        printf("It contains the vowel\n");
    }
    else
    {
        printf("It not contains the vowel\n");
    }

    return 0;
}