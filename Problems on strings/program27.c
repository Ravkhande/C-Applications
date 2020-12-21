
/* problem satemnet: Write a program which accept string from user and return length of
largest word.
Input : “Marvellous Multi OS Infosystems”
Output : 11 
*/

#include <stdio.h>

int LargeWordCount(char *str)
{
    int iMax = 0;
    if (str == NULL)
    {
        return -1;
    }

    while (*str != '\0')
    {
        iMax = 0;
        if (*str == ' ')
        {
            while ((*str == ' ') && (*str != '\0'))
            {
                str++;
            }
        }
        else
        {
            iMax++;
        }
    }

    return iMax;
}

int main()
{
    char arr[70];
    int iRet = 0;

    printf("Enter the string\n");
    scanf("%[^'\n']s", arr);

    iRet = LargeWordCount(arr);

    printf("Length of Largest word is : %d\n", iRet);
    return 0;
}
