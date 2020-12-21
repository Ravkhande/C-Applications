
/* problem sattement: Accept string from user and reverse the contents of that string by
toggling the case.

Input : “aCBdef”
Output : “FEDcbA”
*/

#include <stdio.h>

void StrRevTogX(char *str)
{
    char *cStart = str, *cEnd = str;
    char cTemp;

    if (str == NULL)
    {
        return;
    }

    while (*cEnd != '\0')
    {
        cEnd++;
    }

    cEnd--;

    while (cStart <= cEnd)
    {

        cTemp = *cStart;
        *cStart = *cEnd;
        *cEnd = cTemp;

        while (*str != '\0')
        {

            if ((*str >= 'A') && (*str <= 'Z'))
            {
                *str = *str + 32;
            }
            else if ((*str >= 'a') && (*str <= 'z'))
            {
                *str = *str - 32;
            }
            str++;
        }

        str++;
        cStart++;
        cEnd--;
    }
}

int main()
{
    char arr[50];

    printf("Enter the string\n");
    scanf("%[^'\n']s", arr);

    StrRevTogX(arr);

    printf("Reversed Toogle string is : %s\n", arr);

    return 0;
}