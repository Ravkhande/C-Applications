
/* problem satement: Write a program which accept string from user and print below
pattern.
Input : “Marvellous”
Output : 
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
 M A R V E L L O U S
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
            if (str[j] >= 'A' && str[j] <= 'Z')
            {
                str[j] = str[j] + 32;
            }
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
