
/* Problem statement: WAP which Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)  */

#include <stdio.h> // for printf and scanf Library function

void Display(char ch)
{
    printf("Decimal :%d\n", ch);
    printf("Octal :0%o\n", ch);
    printf("Hexadecimal :0X%x\n", ch);
}

int main()
{
    char cValue = '\0';
    printf("Enter the character\n");
    scanf("%c", &cValue);
    Display(cValue);

    return 0;
}