/*
    Problem statement : Accept string from user and one charcter return the first occurance of that character
 
 Input : "Hello"
            l
 Output : 2

 Input : "Hello World"
            o
 Output : 4
 
 Input : "AE Demo"
                e
 Output : 4

 Input : "AE Demo"
               H
 Output : -1

 */

#include<stdio.h>

int SearchFirstOcc(char str[], char ch)
{
    int i = 0;
    
    if((str == NULL) || (ch == '\0'))
    {
        return -1;
    }
    
    while(str[i] != '\0')
    {
            if(str[i] == ch)
            {
                break;
            }
        i++;
    }
    
    if(str[i] == ch)        // Loop terminated due to break
    {
        return i;
    }
    else                        // Loop terminated due to '\0'
    {
        return -1;
    }

}

int SearchFirstOccX(char *str, char ch)
{
    int i = 0;
    
    if((str == NULL) || (ch == '\0'))
    {
        return -1;
    }
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
        i++;
    }
    
    // *(str++);
    
    if(*str == ch)
    {
        return i;
    }
    else
    {
        return -1;
    }
    
}

int main()
{
    char arr[30];
    char cValue = '\0';
    
    int iRet = 0;
    
    printf("Please enter the string\n");
    scanf("%[^'\n']s",arr);
        
    printf("Please enter the character\n");
    scanf(" %c",&cValue);
    
    iRet = SearchFirstOcc(arr,cValue);
    
    if(iRet == -1)
    {
        printf("There is no such character\n");
    }
    else
    {
        printf("First occurance of character at : %d\n",iRet);
    }
    
    return 0;
}






























