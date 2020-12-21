

/* problem statement: Write a program which 2 strings from user and concat second string
after first string. (Implement strcat() function).

Input : “Marvellous Infosystems”
            “Logic Building”
Output : “Marvellous Infosystems Logic Building” 

*/

#include <stdio.h>
#include <string.h>

void mystrcat(char *src, char *dest)
{
    if (src == NULL || dest == NULL)
    {
        return;
    }

    while (*src != '\0')
    {
        src++;
    }

    while (*dest != '\0')
    {

        *src = *dest;
        dest++;
        src++;
    }

    *src = '\0';
}

int main()
{
    char arr[50]="Marvellous Infosystems";
    char brr[50]="Logic Building";


    mystrcat(arr, brr);

    printf("%s", arr);

    return 0;
}
