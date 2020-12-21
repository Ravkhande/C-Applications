
/* Problem Statement: Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255.  */

#include <stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    for (iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("char=%c\t Dec=%d\t Hex=0X%x\t Octal=0%o\t\n", iCnt, iCnt, iCnt, iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}