// WAP to print pascal's triangle
/*
1            => (a+b)^n ->n=row no // if n=0 -> (a+b)^0=1
1 1         // if n=1 -> (a+b)^1= 1a+1b
1 2 1      // if n=2 -> (a+b)^2= 1a^2+2ab+1b^2
1 3 3 1
1 4 6 4 1 

*/

#include <stdio.h>

void DisplayPascal(int row)
{
    int i = 0, j = 0;
    int c[row][row];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j <= i; j++)
        {

            if (i == j)
            {

                c[i][j] = 1;
                printf("%d\t", c[i][j]);
            }
            else if (j == 0)
            {
                c[i][j] = 1;
                printf("%d\t", c[i][j]);
            }
            else
            {
                c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
                printf("%d\t", c[i][j]);
            }
        }
        printf("\n");
    }
}

int main()
{
    int row = 0;
    printf("Enter the no of rows:\n");
    scanf("%d", &row);

    DisplayPascal(row);
    return 0;
}
