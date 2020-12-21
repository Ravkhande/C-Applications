/*
    Problem statement :
 Accept number from user and check whether 10th,11th and 12th bit is on or off.
 
 Input :   2400
 Binary :    0000   0000    0000    0000    0000    1001    0110    0000
 Output : TRUE
 
 Input :   35
 Binary :   0000    0000    0000    0000    0000    0000    0010    0011
 Output : FALSE
 
 */
#include<stdio.h>
typedef int BOOL;
# define TRUE 1
#define FALSE 0

BOOL CheckBit(int iNo)
{
    int iMask = 0X00000E00;
    
    int iResult = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    iResult = iNo & iMask;
    
    if(iResult == iMask)
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
        printf("6th,7th and 12th bit is on\n");
    }
    else
    {
        printf("One of the bit or all bits are Off\n");
    }
    return 0;
}

/*

 ------------------------------------------------------------------------------------------------
 
 Test case : 1
 
 int iNo = 3840;                        // 2 + 4 + 8
 int iMask = 0X00000E00;
 
iNo                          0000   0000    0000    0000    0000    1111    0000    0000
iMask                      0000    0000    0000    0000    0000    1110    0000   0000          &
 __________________________________________________________________________
 iResult                   0000   0000      0000    0000    0000    1110    0000   0000

  ------------------------------------------------------------------------------------------------
 
 Test case : 2
  
  int iNo = 43;
  int iMask = 0X00000860;
 
 iNo                         0000    0000    0000    0000    0000    0000    0010   1011
 iMask                      0000    0000    0000    0000    0000    1000    0110   0000          &
 ___________________________________________________________________________
  iResult                   0000    0000    0000    0000    0000     0000    0010   0000

 
 */












