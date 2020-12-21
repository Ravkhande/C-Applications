/*
Write a program which accept string from user and display only
digits from that string.
Input : “marve89llous121”
Output : 89121
Input : “Demo” 
*/

#include <stdio.h>

void DisplayDigit(char str[])
{
    int i = 0;

    if (str == NULL)         //filter
    {
        return;
    }

    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            printf("%c", str[i]);
        }
        i++;
    }
}

int main()
{
    char arr[20];
    printf("Enter string\n");
    scanf("%[^'\n']s", arr);
    DisplayDigit(arr);
    return 0;
}
