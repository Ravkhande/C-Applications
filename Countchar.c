// Display frequency of each letter from string

// Input : Hello

// Output : 
// H 1
// e 1
// l 2
// o 1


#include<stdio.h>
#include<string.h>

void Countchar(char arr[])
{
    int i=0,j=0,iCount=0,iPos=0;
    char brr[50]={'\0'};
    char temp='\0';

    for(i=0,j=0;i<strlen(arr);i++,j++)
    {
        brr[j]=arr[i];
    }

    for(i=0,j=0;i<strlen(arr);i++,j++)
    {
        if(arr[i]==brr[j])
        {
             iCount++;
             iPos=iCount;  
        }

        if(iPos==1)
        {
                printf("Charcater is %c\n",arr[i]);
                printf("Count is %d\n",iPos);  

        }

        if(iPos>=2)
        {
            break;
        }
        
        iCount=0;

    }

    if(iPos>=2)
    {
                printf("Charcater is %c\n",arr[i]);
                printf("Count is %d\n",iPos);  

    }

}

int main()
{
    char arr[50]={'\0'};
    printf("Enter the string\n");
    scanf("%[^'\n']s",arr);

    Countchar(arr);
    return 0;
}
