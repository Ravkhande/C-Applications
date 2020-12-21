
/* problem statement: Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is. 
  */

#include <stdio.h> // for printf and scanf Library function

void Display(char ch)
{
    if (ch >= 97 && ch <= 122)
    {
        ch = ch - 32;
        printf("%c\n", ch);
    }
    else if (ch >= 65 && ch <= 90)
    {
        ch = ch + 32;
        printf("%c\n", ch);
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
