/*
    Problem statement : Accept string from user and reverse the contents of that sting inplace
 
 Input : "Hello"
 Output : "olleH"

 Input : "abcd"
 Output : "dcba"
 */

#include<stdio.h>

void StrrevX(char str[])
{
    int iStart = 0, iEnd = 0;
    char temp = '\0';
    
    if(str == NULL)
    {
        return;
    }
    
    // Travel the string till end
    while(str[iEnd] != '\0')        // O(N)
    {
        iEnd++;
    }
    iEnd --;
    
    while(iStart < iEnd)            // O(N/2)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;
        
        iStart++;
        iEnd--;
    }
}

int main()
{
    char arr[30];
    
    printf("Please enter the string\n");
    scanf("%[^'\n']s",arr);
        
    StrrevX(arr);
    
    printf("Reverse string is %s\n",arr);
    
    return 0;
}






























