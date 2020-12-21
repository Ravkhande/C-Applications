
/* problem statement:  Write a program which accept string from user reverse that string
in place.
Input : “abcd”
Output : “dcba”

Input : “abba”
Output : “abba” 
*/

#include <stdio.h>

void StrRevX(char str[])
{
    int iStart = 0;
    int iEnd = 0;
    char temp = '\0';

    if (str == NULL) //filter
    {
        return;
    }

    while (str[iEnd] != '\0') // O(N)
    {
        iEnd++;
    }
    iEnd--;

    while (iStart < iEnd) //O(N/2)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    char arr[30];

    printf("Enter the string\n");
    scanf("%[^'\n']s", arr);

    StrRevX(arr);

    printf("Reverse string in that place is: %s\n", arr);

    return 0;
}