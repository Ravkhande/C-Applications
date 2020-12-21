
/* problem statement:  Write a program which accept string from user and copy that
characters of that string into another string by converting all capital
characters into small case.

Input : “Marvellous Python 2”
Output : “marvellous python 2”
*/

#include <stdio.h>

void StrCpySmall(char *src, char *dest)
{
    if ((src == NULL) || (dest == NULL))
    {
        return;
    }

    while (*src != '\0')
    {
        if (*src >= 'A' && *src <= 'Z')
        {
            *src = *src + 32;
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

    StrCpySmall(arr, brr);

    printf("Copied small case string is : %s\n", brr);

    return 0;
}
