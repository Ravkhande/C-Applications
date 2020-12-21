/*
    Problem statement :
 Accept number and poition from user and toggle the bit at that poisition.
 
 Input :
 No: 56
 Poition : 4
 
 Binary :    0000   0000    0000    0000    0000    0000    0011    1000
 Output :   48
 
 0000   0000    0000    0000    0000    0000    0011    0000
    
 Input :
 No : 35
 Position : 4
 
 Binary :   0000    0000    0000    0000    0000    0000    0010    0011
 Output :  43
 0000    0000    0000    0000    0000    0000    0010    1011
 */

#include<stdio.h>

int ToggleBit(int iNo, int iPos)
{
    int iMask = 0x00000001;
    
    int iResult = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    if((iPos < 1) || (iPos > 32))
    {
        return 0;
    }
    
    iMask = iMask << (iPos -1);
    
    iResult = iNo ^ iMask;
    
    return iResult;
}

int main()
{
    int iNo = 0, iPos = 0, iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    
    printf("Enter the position\n");
    scanf("%d",&iPos);
        
    iRet = ToggleBit(iNo,iPos);
    
    printf("Modified number after bit toggle is : %d\n",iRet);

    return 0;
}

/*
 ------------------------------------------------------------------------------------------------
 
 iMask = 0x00000001;
 0000   0000    0000    0000    0000    0000    0000    0001
 
 Position : 4
 
 To design the mask at runtime we have to left shift the number by the position.
 
 iMask = imask << (iPos -1);
 int iNo = 56;
 
Binary :                   0000   0000    0000    0000    0000    0000    0011    1000
iMask                      0000    0000    0000    0000    0000    0000    0000   1000          ^
 __________________________________________________________________________
 iResult                   0000   0000      0000    0000    0000    0000    0011   0000

  ------------------------------------------------------------------------------------------------
 iMask = 0x00000001;
  0000   0000    0000    0000    0000    0000    0000    0001
  
  Position : 4
  
  To design the mask at runtime we have to left shift the number by the position.
  
  iMask = imask << (iPos -1);
  int iNo = 35;
  
 Binary :                  0000    0000    0000    0000    0000    0000    0010    0011
 iMask                      0000    0000    0000    0000    0000    0000    0000   1000          ^
  __________________________________________________________________________
  iResult                   0000   0000      0000    0000    0000    0000    0010   1011
 */














