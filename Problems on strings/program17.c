
/* problem statement: Write a program which accept string from user and copy that
characters of that string into another string by removing all white
spaces.  */

#include <stdio.h>

void StrCpyX(char *src, char *dest)
{
    if ((src == NULL) || // if source string is null
        (dest == NULL))  //if destination string is null
    {
        return;
    }

    while (*src != '\0')
    {
        if (*src != ' ')
        {
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
    char brr[30];

    printf("Enter the string\n");
    scanf("%[^'\n']s", arr);

    StrCpyX(arr, brr);

    printf("String without white spaces are: %s\n", brr);

    return 0;
}
