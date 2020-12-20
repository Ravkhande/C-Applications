
/*
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : 
 *
 * *
 * * *
 * * * * 
 

*/


#include<stdio.h>
void pattern(int row)
{
    int i=0,j=0;

    for(i=1;i<=row;i++)
    {
       for(j=i;j>=1;j--)
       {  
           printf("*\t");
    
       } 
    printf("\n");
    }

}

int main()
{
    int row=0,col=0;
    printf("Enter the no of rows :\n");
    scanf("%d",&row);

    pattern(row);

    return 0;
}


