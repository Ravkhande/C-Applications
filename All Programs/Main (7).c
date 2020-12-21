/*
    Problem statement : Accept string from user and one charcter return the frequency of that character.
 
 Input : "Hello"
                l
 Output : 2

 Input : "Hello World"
            o
 Output : 2
 
 Input : "AE Demo"
                e
 Output : 1

 Input : "AE Demo"
               H
 Output : 0

 */

#include<stdio.h>

int Frequency(char str[], char ch)
{
    int iCnt = 0, i = 0;
    
    if(str == NULL)
    {
        return -1;
    }
    
    // First approach using while loop
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            iCnt++;
        }
        i++;
    }
    
    // Second approach using for loop
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            iCnt++;
        }
    }
    // Third approach using pointer
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    
    
    return iCnt;
}

int main()
{
    char arr[30];
    char cValue = '\0';
    
    int iRet = 0;
    
    printf("Please enter the string\n");
    scanf("%[^'\n']s",arr);
    
    // fflush(STDIN);
    
    printf("Please enter the character to calculate the frequency\n");
    scanf(" %c",&cValue);       // Add space to flush the contents of input buffer
    
    iRet = Frequency(arr,cValue);
    
    printf("Total Frequency is %d\n",iRet);
    
    return 0;
}






























