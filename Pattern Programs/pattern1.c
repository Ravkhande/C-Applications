
/*
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 3
Output : 
 1 2 3
 1 2 3
 1 2 3
 1 2 3 

 */


#include<stdio.h>

void pattern(int row,int col)
{
    int i=0,j=0,no=1;


    for(i=1;i<=row;i++)
    {
       for(j=1;j<=col;j++)
       {
           printf("%d\t",no);
           no++;
           
       }
       no=1;
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

