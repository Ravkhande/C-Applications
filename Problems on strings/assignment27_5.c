
/* problem statement:  Write a program which accept string from user and display it in
reverse order.  */

#include <stdio.h>

void Reverse(char str[])
{
    int iStart = 0;
    int iEnd = 0;
    char temp = '\0';
    //int i=0;

    if (str == NULL) //filter
    {
        return;
    }

    while (str[iEnd] != '\0') // Time complexity: O(N)
    {
        iEnd++;
    }

    iEnd--;

    while (iStart < iEnd) // Time complexity: O(N/2)
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

    Reverse(arr);

    printf("Reverse string is: %s\n", arr);
    return 0;
}