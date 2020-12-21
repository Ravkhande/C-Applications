

/* problem statement:  Write a program which accept string from user and copy the
contents of that string into another string. (Implement strncpy()
function)

Input : “Marvellous Multi OS”
 10
Output : “Marvellous
*/

#include <stdio.h>
#include <string.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{

    if (src == NULL || iCnt == 0)
    {
        return;
    }

    while ((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }

    *dest = '\0';

    strncpy(dest, src, iCnt);
}

int main()
{

    char arr[30];
    char brr[30];

    int iValue = 0;

    printf("Enter the string\n");
    scanf("%[^'\n']s", arr);

    printf("Enter the integer chracter\n");
    scanf(" %d", &iValue);

    StrNCpyX(arr, brr, iValue);

    printf("%s", brr);

    return 0;
}
