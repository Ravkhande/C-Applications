/*
    Problem statement :
Accept string from user and return number of digits from the string.
  
Input : "abcd xy"
Output : 0
 
Input : India21
Output : 2
 
Input : Marvellous 75Pune98
Output : 4
 */

#include<stdio.h>

void DigitCount(char *str)
{
    if(str == NULL)
    {
        return;
    }
    
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c\n",*str);
        }
        str++;
    }
}

int main()
{
    char arr[30] = {'\0'};
    
    printf("Please enter string\n");
    scanf("%[^'\n']s",arr);
    
    DigitCount(arr);
    
    return 0;
}






























