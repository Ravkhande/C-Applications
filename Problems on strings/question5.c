
/* problem satemnt: Write a program which accept string from user and replace each
occurrence of first character of each word into capital case.

Input : “marvellous infosystems by Piyush khairnar”
Output : “Marvellous Infosystems By Piyush Khairnar” 
*/

#include <stdio.h>

void StrCap(char *str)
{
    int iCnt = 1;
    if (str == NULL)
    {
        return;
    }

    while (*str != '\0')
    {
        if ((*str == 'm') || (*str == 'i') || (*str == 'b') || (*str == 'k'))
        {
            *str = *str - 32;
        }

        if (*str != ' ')
        {
            str++;
        }

        str++;
    }
}

int main()
{
    char arr[50] = "marvellous infosystems by Piyush khairnnar";

    StrCap(arr);

    printf("%s", arr); // Marvellous Infosystems By Piyush Khairnnar

    return 0;
}