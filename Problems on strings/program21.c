
/* problem statemnet:  Write a program which accepts 2 strings from user and concat N
characters of second string after first string.Value of N should be
accepted from user. (Implement strncat() function).
Note : If third parameter is greater than the size of second string then
concat whole string after first string.

Input : “Marvellous Infosystems”
 “Logic Building”
 5
Output : “Marvellous Infosystems Logic” 
*/

#include <stdio.h>

void StrNCatX(char *src, char *dest, int iCnt)
{
    if ((src == NULL) || (dest == NULL))
    {
        return;
    }

    while (*src != '\0') // travel old book to copy the content of new book at the end of old book
    {
        src++;
    }

    *src = ' '; // add explicitly space
    src++;

    while ((*dest != '\0') && (iCnt != 0)) // copy the content of new book to old book till the given number
    {
        *src = *dest;
        dest++;
        src++;
        iCnt--;
    }

    *src = '\0';
}

int main()
{
    char arr[40]; // old book
    char brr[40]; // new book
    int iNo = 0;

    printf("Enter the first string:\n");
    scanf("%[^'\n']s", arr);

    printf("Enter the second string:\n");
    scanf(" %[^'\n']s", brr);

    printf("Enter the N number\n");
    scanf(" %d", &iNo);

    StrNCatX(arr, brr, iNo);

    printf("Modified string is : %s\n", arr);

    return 0;
}
