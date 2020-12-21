/*
    Problem statement :
 Accept number and poition from user and check whether that bit is on or off.
 
 Input :
 No: 2400
 Poition : 6
 
 Binary :    0000   0000    0000    0000    0000    1001    0110    0000
 Output : TRUE
 
 Input :
 No : 35
 Position : 4
 
 Binary :   0000    0000    0000    0000    0000    0000    0010    0011
 Output : FALSE
 
 */

#include<stdio.h>
typedef int BOOL;
# define TRUE 1
#define FALSE 0

BOOL CheckBit(int iNo, int iPos)
{
    int iMask = 0x00000001;
    
    int iResult = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    if((iPos < 1) || (iPos > 32))
    {
        return FALSE;
    }
    
    iMask = iMask << (iPos -1);
    
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
    int iNo = 0, iPos;
    BOOL bRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    
    printf("Enter the position\n");
    scanf("%d",&iPos);
        
    bRet = CheckBit(iNo,iPos);
    if(bRet == TRUE)
    {
        printf("Bit is on\n");
    }
    else
    {
        printf("Bits is Off\n");
    }
    return 0;
}

/*
 ------------------------------------------------------------------------------------------------
 
 iMask = 0x00000001;
 0000   0000    0000    0000    0000    0000    0000    0001
 
 Position : 7
 
 To design the mask at runtime we have to left shift the number by the position.
 
 iMask = imask << (iPos -1);
 
 After shifting our updated mask become
 0000   0000    0000    0000    0000    0000    0100    0000
 
 int iNo = 96;
 
iNo                          0000   0000    0000    0000    0000    0000    0110    0000
iMask                      0000    0000    0000    0000    0000    0000    0100   0000          &
 __________________________________________________________________________
 iResult                   0000   0000      0000    0000    0000    0000    0100   0000

  ------------------------------------------------------------------------------------------------

 */









int no = 12;
Binary of 12 is             (00001100)

no = no << 3;


















