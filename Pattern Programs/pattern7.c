
/*
 Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 4
Output : 
 2 4 6 8 10
 1 3 5 7 9
 2 4 6 8 10
 1 3 5 7 9 

 */


#include<stdio.h>
void pattern(int row,int col)
{
    int i=0,j=0,iCnt=0,iCnt1=0;

    for(i=1;i<=row;i++)
    {
       for(j=1;j<=col;j++)
       { 
           if(i%2!=0)
           {
               iCnt=iCnt+2;
             printf("%d\t",iCnt);    
           }
           else if(i%2==0)
           {
                    
                   printf("%d\t",iCnt1);
                 iCnt1=iCnt1+2;
                     
           }
           
       }
       iCnt=0;
       iCnt1=1;
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

