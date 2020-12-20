
/*
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 5 iCol = 5
Output : 
 a b c d e
 1 2 3 4 5
 a b c d e
 1 2 3 4 5
 a b c d e 

 */


#include<stdio.h>
void pattern(int row,int col)
{
    int i=0,j=0,iCnt=1;
    char ch='a';

    for(i=1;i<=row;i++)
    {
       for(j=1;j<=col;j++)
       { 
           if(i%2==0)
           {
              printf("%d\t",iCnt);
              iCnt++;
           }
           else if(i%2!=0)
           {
               printf("%c\t",ch);
               ch++;

           }
       }
       iCnt=1;
       ch='a';
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

