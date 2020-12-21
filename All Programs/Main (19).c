/*
    Problem statement :
 Accept number from user and check whether fourth bit is on or off.
 
 Input :   43                     Binary :    1   0   1   0   1   1       (1+2+8+32)
 Output : TRUE
 
 Input :   35                     Binary :    1   0   0   0   1   1       (1+2+32)
 Output : FALSE
 
 */
#include<stdio.h>
typedef int BOOL;
# define TRUE 1
#define FALSE 0

BOOL CheckBit(int iNo)
{
    int iPos = 0,iRem = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iRem = iNo %2;
        iPos++;
        if(iPos == 4)
        {
            break;
        }
        iNo = iNo / 2;
    }
    if((iPos == 4) && (iRem == 1))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iNo = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    	
    bRet = CheckBit(iNo);
    if(bRet == TRUE)
    {
        printf("Fourth bit is on\n");
    }
    else
    {
        printf("Fourth bit is Off\n");
    }
    return 0;
}






























