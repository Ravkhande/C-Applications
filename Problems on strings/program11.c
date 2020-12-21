 
/*  problem statement: .Write a program which accept string from user and copy the
contents of that string into another string. (Implement strcpy()
function)
Input : “Marvellous Multi OS”
Output : “Marvellous Multi OS” in another string

*/

#include <stdio.h>
#include <string.h>

void StrCpyX(char *src, char *dest)
{

    if (src == NULL) //filter
    {
        return;
    }

    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    strcpy(dest, src);
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter the string\n");
    scanf("%[^'\n']s", arr);

    StrCpyX(arr, brr);

    printf("%s", brr);
    return 0;
}
