
/* problem satemnt: .Write a program which accept string from user and print below
pattern.
Input : “Marvellous”
Output : 
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s

Input : “PPA”
Output :
 P P A
 P P A
 P P A 
 */

#include <stdio.h>

void Pattern(char str[])
{

    int i = 0, j = 0;

    if (str == NULL)
    {
        return;
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; str[j] != '\0'; j++)
        {
            printf("%c\t", str[j]);
        }
        printf("\n");
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
