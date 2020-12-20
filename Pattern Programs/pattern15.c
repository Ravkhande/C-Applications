
// Not done yet
/*
Accept number of rows and number of columns from user and display below
pattern. 
Input : iRow = 4 iCol = 4
Output : 
 1 2 3 4 5
 1 2     5
 1   3   5
 1     4 5
 1 2 3 4 5 

 */



#include<stdio.h>
void pattern(int row,int col)
{
    int i=0,j=0,iCnt=0;

    for(i=1;i<=row;i++)
    {
       for(j=1;j<=col;j++)
       {      
           if(i==j)
           {
               iCnt++;
               printf("%d\t",iCnt);
               
           }
           else if(j==1 || j==col)
           {
               printf("%d\t",j);
               
           }
           else if(i==1 || i==row)
           {
               iCnt++;
               printf("%d\t",iCnt);
               
           }
           else if(i>j)
           {
               printf(" \t");
           }
           else if(j>i)
           {
               printf(" \t");
           }
                
       }
       iCnt=0;
        
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


