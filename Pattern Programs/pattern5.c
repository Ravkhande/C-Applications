/*

 Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : 
 A B C D
 a b c d
 A B C D
 a b c d 

 */



#include<stdio.h>
void pattern(int row,int col)
{
    int i=0,j=0;
    char ch='A';
    char ch1='a';


    for(i=1;i<=row;i++)
    {
       for(j=1;j<=col;j++)
       { 
           if(i%2!=0)
           {
           printf("%c\t",ch);
           ch++;
           }
           else if(i%2==0)
           {
               printf("%c\t",ch1);
               ch1++;
           }
       }
    ch='A';
    ch1='a';
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

