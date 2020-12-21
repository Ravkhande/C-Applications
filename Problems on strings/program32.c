
/* problem satetement: Write a program which accept string from user and print below
pattern.
Input : “Marvellous”
Output : 
 M a r v e l l o u s
 M a r v e l l o u
 M a r v e l l o
 M a r v e l l
 M a r v e l
 M a r v e
 M a r v
 M a r
 M a
 M
Input : “PPA”
Output : 
 P P A
 P P
 P 
 */

#include <stdio.h>

void Pattern(char str[])
{

    int i = 0, j = 0;

    if (str == NULL)
    {
        return;
    }
}
}

int main()
{
    char arr[30];

    printf("Enter the string\n");
    scanf("%[^'\n']s", arr);

    Pattern(arr);

    return 0;
}
