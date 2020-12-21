
/* problem statement: Write a program which accept string from user and toggle the case.
Input : “Marvellous Multi OS”
Output : mARVELLOUS mULTI os 

*/

#include <stdio.h>

void strtogglex(char str[])
{
    int i = 0;

    if (str == NULL)
    {
        return;
    }

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }

    printf("Toggle string is: %s", str);
}

int main()
{
    char arr[30];

    printf("enter the string\n");
    scanf("%[^'\n']s", arr);

    strtogglex(arr);

    return 0;
}
