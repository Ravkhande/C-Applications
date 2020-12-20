
/*
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 4
Output : 
 1 2 3 4
 2 3 4 5
 3 4 5 6
 4 5 6 7 

 */


#include<stdio.h>
void pattern(int row,int col)
{
    int i=0,j=0,iCnt=1;

    for(i=1;i<=row;i++)
    {
       iCnt=i;
       for(j=1;j<=col;j++)
       { 
           
           printf("%d\t",iCnt);
           iCnt++;
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

