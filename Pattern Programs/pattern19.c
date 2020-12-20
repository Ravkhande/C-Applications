
/*
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : 
 1 2 3 4
   2 3 4
     3 4
       4

 */



#include<stdio.h>
void pattern(int row,int col)
{
    int i=0,j=0,iCnt=1;

    for(i=row;i>=1;i--)
    {
        iCnt=i;
       for(j=1;j<=col;j++)
       {
           if(i==j)
           {
               printf("%d\t",iCnt);
               iCnt++;
           }
           else if(j>i)
           {
               iCnt++;
               printf("%d\t",iCnt);

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


