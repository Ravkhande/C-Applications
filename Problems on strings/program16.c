
/* problem statement: Write a program which accept string from user and copy that
characters of that string into another string in reverse order.

Input : “Marvellous Python”
Output : “nohtyP suollevraM” 
*/

#include <stdio.h>

void StrCpyRev(char src[], char dest[])
{
    int iStart = 0, iEnd = 0, i = 0;
    char temp = '\0';

    if (src == NULL || dest == NULL) //filter
    {
        return;
    }

    while (src[iEnd] != '\0')
    {
        iEnd++;
    }

    iEnd--;

    while (iStart < iEnd)
    {
        temp = src[iStart];
        src[iStart] = src[iEnd];
        src[iEnd] = temp;
        iStart++;
        iEnd--;
    }

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}

int main()
{
    char arr[40];
    char brr[40];

    printf("Enter the string\n");
    scanf("%[^'\n']s", arr);

    StrCpyRevX(arr, brr);
    printf("copied reverse string is : %s\n", brr);

    return 0;
}
