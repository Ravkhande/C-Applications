
/* problem staement:  Write a program which accept string from user and copy that
characters of that string into another string by converting all small
characters into capital case.

Input : “Marvellous Python 2”
Output : “MARVELLOUS PYTHON 2” 
*/

#include <stdio.h>

void StrCpyCap(char *src, char *dest)
{
    if ((src == NULL) || (dest == NULL))
    {
        return;
    }

    while (*src != '\0')
    {
        if (*src >= 'a' && *src <= 'z')
        {
            *src = *src - 32;
        }

        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter the string\n");
    scanf("%[^'\n']s", arr);

    StrCpyCap(arr, brr);

    printf("Copied capital case string is : %s\n", brr);

    return 0;
}