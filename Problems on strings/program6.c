

/* problem statemnt: Write a program which accept string from user and accept one
character. Check whether that character is present in string or not.  

Input : “Marvellous Multi OS”
            e
Output : TRUE

Input : “Marvellous Multi OS”
              W
Output : FALSE 

*/
#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkChar(char *str, char ch)
{

    if (str == NULL) // Filter if it is unable to allocate the memory
    {
        return -1;
    }

    while (*str != '\0')
    {
        if (*str == ch)
        {
           break;
        }

        str++;
    }

    if (*str == ch)
    {
        return TRUE;
    }



    return FALSE;
}

int main()
{
    char arr[30];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the string\n");
    scanf("%[^'\n']s", arr);

    printf("Enter the character\n");
    scanf(" %c", &cValue); // it will flush the next line character '\n'

    bRet = ChkChar(arr, cValue);

    if (bRet == TRUE)
    {
        printf("character is present in string \n");
    }
    else
    {
        printf("character is not present in the string\n");
    }

    return 0;
}
