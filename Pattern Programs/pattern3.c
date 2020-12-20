/*
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 4
Output : 
 * # * #
 * # * #
 * # * # 
 
 */


#include<stdio.h>

void pattern(int row,int col)
{
    int i=0,j=0;


    for(i=1;i<=row;i++)
    {
       for(j=1;j<=col;j++)
       {
           if(j%2==0)
           {
           printf("#\t");
           }
           else if(j%2!=0)
           {
               printf("*\t");
           }
           
       }
        printf("\n");
    }

}

int main()
{
    int row=0,col=0;
    printf("Enter the no of rows :\n");
    scanf("%d",&row);

    printf("Enter the no of columns :\n");
    scanf("%d",&col);

    pattern(row,col);

    return 0;
}

