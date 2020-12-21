
/* probelm sattemnt: Write a program which accept string from user and print below
pattern.
Input : “Marvellous”
Output : 
 M
 M a
 M a r
 M a r v
 M a r v e
 M a r v e l
 M a r v e l l
 M a r v e l l o
 M a r v e l l o u
 M a r v e l l o u s
Input : “PPA”
Output : 
 P
 P P
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
            if (i >= j)
            {
                printf("%c\t", str[j]);
            }
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
