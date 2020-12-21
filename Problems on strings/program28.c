
/* problem satement:  Write a program which accept string from user and reverse each
word in place.

Input : “Marvellous Multi OS”
Output : “suollevraM itluM SO"
*/

#include <stdio.h>

void StrWrdRev(char str[])
{
    int iStart = 0, iEnd = 0, i = 0;
    char cTemp = '\0';

    if (str == NULL)
    {
        return;
    }

    while (str[iEnd] !=' ')
    {
        iEnd++;
    }

    iEnd--;

    while (iStart < iEnd)
    {
        cTemp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = cTemp;

        iStart++;
        iEnd--;
    }

    
}

int main()
{
    char arr[60];

    printf("Enter the string\n");
    scanf("%[^'\n']s", arr);

    StrWrdRev(arr);

    printf("Reverse string is: %s\n", arr);

    return 0;
}
