
/* Problem Statement: Accept N numbers from user and accept one another number as NO ,
check whether NO is present or not. 
 */

#include <stdio.h>  // for printf and scanf Library function
#include <stdlib.h> //for malloc Library function

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Display(int arr[], int iSize, int iNo)
{

    int iStart = 0, iEnd = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iStart = 0, iEnd = iSize - 1; iStart <= iEnd; iStart++, iEnd--)
    {
        if (iStart == iEnd && arr[iStart] == iNo)
        {
            break;
        }

        if (arr[iStart] == iNo)
        {
            break;
        }

        if (arr[iEnd] == iNo)
        {
            break;
        }
    }

    if (arr[iStart] == iNo || arr[iEnd] == iNo)
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
    int iValue = 0;
    int *ptr = NULL;
    int iCnt = 0, iSize = 0;
    BOOL bRet = FALSE;
    printf("Enter the value of N number:\n");
    scanf("%d", &iValue);

    if (iValue == 0)
    {
        return -1;
    }

    // here (int*) is used to break the 20 bytes of memory into chunks or parts of 4 bytes
    ptr = (int *)malloc(sizeof(int) * iValue); //malloc(4*iValue);

    if (ptr == NULL) // if malloc is unable to allocate the memory
    {
        printf("Error: unable to allocate memory\n");
        return -1; // it will tell the OS that it is Errornous termination of program
    }

    printf("Enter the number that we want to search:\n");
    scanf("%d", &iSize);

    printf("Enter the %d numbers\n", iValue);

    for (iCnt = 0; iCnt < iValue; iCnt++)
    {
        printf("Enter element: %d\n", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    bRet = Display(ptr, iValue, iSize);

    if (bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }

    free(ptr);

    return 0;
}
