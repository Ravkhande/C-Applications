
/* problem satement: Write a program which accept string from user and copy the
contents into another string by removing extra white spaces.

Input : “Marvel lous multi OS”
Output : “Marvellous multi OS” 
*/

#include <stdio.h>

void StrCpyX(const char *src, char *dest)
{
    if ((src == NULL) || (dest == NULL))
    {
        return;
    }

    while (*src != '\0')
    {

        if (*src == ' ')
        {
            src = src + 2;
        }

        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char arr[100] = "Marvel  lous   multi   OS";
    char brr[30]; // Empty string

    StrCpyX(arr, brr);

    printf("%s", brr); // Marvellous multi OS

    return 0;
}
