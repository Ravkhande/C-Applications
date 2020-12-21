/*
    Problem statement :
 Accept 2 strings from user and concate the contens of first string at the end second string.
 
 Implement strcat.
 
 First : "abcd xy"
 Second : "pqr 21"
 
 Updated Second : "pqr 21 abcd xy"
 */

#include<stdio.h>

void StrcatX(char *Src, char *Dest)
{
    if(
       (Src == NULL) ||     // If source string is NULL
       (Dest == NULL)       // If destination string is NULL
       )
    {
        return;
    }
    
    // Travel the Dest string till the '\0'
    while(*Dest != '\0')    // Junya wahichya shewati ja
    {
        Dest++;                // Pana palata
    }
    
   while(*Src != '\0')
   {
       *Dest = *Src;
       Src++;
       Dest++;
   }
    
    *Dest = '\0';
}

int main()
{
    char arr[30] = {'\0'};   // Bharaleli book
    char brr[30] = {'\0'};   // Blank book
    
    printf("Please enter first string\n");
    scanf("%[^'\n']s",arr);
    
    printf("Please enter second string\n");
    scanf(" %[^'\n']s",brr);
        
    StrcatX(arr,brr);       // StrcpyX(arr,brr);
    
    printf("String after concatination %s\n",brr);
    
    return 0;
}






























