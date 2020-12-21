/*
    Problem statement :
 Accept string from user and copy the conetents into another string.
 Implement strcpy.
 */

#include<stdio.h>

void StrcpyX(char Src[], char Dest[])
{
    int i = 0;
    if(
       (Src == NULL) ||     // If source string is NULL
       (Dest == NULL)       // If destination string is NULL
       )
    {
        return;
    }
    while(Src[i] != '\0')
    {
        Dest[i] = Src[i];
        i++;
    }
    Dest[i] = '\0';
}

int main()
{
    char arr[30] = {'\0'};   // Bharaleli book
    char brr[30] = {'\0'};   // Blank book
    
    printf("Please enter the string\n");
    scanf("%[^'\n']s",arr);
        
    StrcpyX(arr,brr);
    
    printf("String after copy %s\n",brr);
    
    return 0;
}






























