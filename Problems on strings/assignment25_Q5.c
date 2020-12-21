
/* Problem statement: WAP which Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)  */

#include <stdio.h> // for printf and scanf Library function

void DisplaySchedule(char chDiv)
{
    switch (chDiv)
    {
    case 'A':
    case 'a':
        printf("Your Exam at 7.00 AM");
        break;

    case 'B':
    case 'b':
        printf("Your Exam at 8.30 AM");
        break;

    case 'C':
    case 'c':
        printf("Your Exam at 9.20 AM");
        break;

    case 'D':
    case 'd':
        printf("Your Exam at 10.30 AM");
        break;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c", &cValue);
    DisplaySchedule(cValue);
    return 0;
}