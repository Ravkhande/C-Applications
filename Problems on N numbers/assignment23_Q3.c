
/* Problem Statement: Accept N numbers from user and accept one another number as NO ,
return index of last occurrence of that NO. */

#include <stdio.h>  // for printf and scanf Library function
#include <stdlib.h> //for malloc Library function

int Display(int arr[], int iSize, int iNo)
{

    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = iSize - 1; iCnt >= 0; iCnt--)
    {

        if (arr[iCnt] == iNo)
        {
            break;
        }
    }

    if (iCnt == -1)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int iValue = 0;
    int *ptr = NULL;
    int iCnt = 0, iRet = 0, iSize = 0;
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

    iRet = Display(ptr, iValue, iSize);

    if (iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("Index of last occurance is : %d\n", iRet);
    }

    free(ptr);

    return 0;
}