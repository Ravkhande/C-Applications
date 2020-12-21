
/* Problem Statement: Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.   */

#include <stdio.h> // for printf and scanf Library function

void Display(char ch)
{
    int cCnt = '\0';
    if (ch >= 97 && ch <= 122)
    {

        for (cCnt = ch; cCnt >= 97; cCnt--)
        {
            printf("%c\t", (char)cCnt);
        }
    }
    else if (ch >= 65 && ch <= 90)
    {
        for (cCnt = ch; cCnt <= 90; cCnt++)
        {
            printf("%c\t", (char)cCnt);
        }
    }
    else
    {
        printf("%c\n", ch);
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter the character\n");
    scanf("%c", &cValue);
    Display(cValue);

    return 0;
}
