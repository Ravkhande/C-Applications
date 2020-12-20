
/* problem statement: 
   Write a program which accept string from user and check 
    digits from that string.

Input : “marve89llous121”
Output : 89121

Input : “Demo”
Output : 

*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkDigits(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            break;
        }
        i++;
    }

    if (str[i] >= '0' && str[i] <= '9')
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
    char arr[50] = {'\0'};
    BOOL bREt = FALSE;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", arr);

    bREt = chkDigits(arr);
    if (bREt == TRUE)
    {
        printf("String contains the digits\n");
    }
    else
    {
        printf("String does not contains the digits\n");
    }

    return 0;
}