

/* problem statement:  Write a program which accept string from user and copy capital
characters of that string into another string.
Input : “Marvellous Multi OS”
Output : “MMOS” 
*/

#include <stdio.h>

void StrCpyCap(char *src, char *dest)
{

    if (src == NULL)
    {
        return;
    }

    while (*src != '\0')
    {
        if ((*src >= 'A') && (*src <= 'Z'))
        {

            if ((*src >= 'a') && (*src <= 'z'))
            {
                break;
            }

            *dest = *src;
            dest++;
        }

        src++;
    }

    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30]; // Empty string

    printf("Enter the string\n");
    scanf("%[^'\n']s", arr);

    StrCpyCap(arr, brr);

    printf("%s", brr);

    return 0;
}
