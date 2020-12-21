
/* Problem Statement: Accept N numbers from user and return difference between summation
of even elements and summation of odd elements. */

#include <stdio.h>  // for printf and scanf Library function
#include <stdlib.h> //for malloc Library function

#define ERRMEMORY -1
#define ERRSIZE -2

int Difference(int arr[], int iSize)
{
    int iCnt = 0; // for loop counter
    int iEvenSum = 0;
    int iOddSum = 0;

    if (arr == NULL) // if the pointer is unable to allocate the memory
    {
        return ERRMEMORY; //memory failure
    }

    if (iSize <= 0) //if the size of array is invalid
    {
        return ERRSIZE;
    }

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((arr[iCnt] % 2) == 0)
        {
            iEvenSum = iEvenSum + arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + arr[iCnt];
        }
    }

    return (iEvenSum - iOddSum);
}

int main()
{
    int iValue = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;
    printf("Enter the value of N number:\n");
    scanf("%d", &iValue);

    // here (int*) is used to break the 20 bytes of memory into chunks or parts of 4 bytes
    ptr = (int *)malloc(sizeof(int) * iValue); //malloc(4*iValue);

    if (ptr == NULL) // if malloc is unable to allocate the memory
    {
        printf("Error: unable to allocate memory\n");
        return -1; // it will tell the OS that it is Errornous termination of program
    }

    printf("Enter the %d numbers\n", iValue);

    for (iCnt = 0; iCnt < iValue; iCnt++)
    {
        printf("Enter element: %d\n", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Difference(ptr, iValue);

    if (iRet == ERRMEMORY)
    {
        printf("Error: unable to allocate the memory\n");
    }
    else if (iRet == ERRSIZE)
    {
        printf("Error: Invalid Size");
    }
    else
    {
        printf("Difference is :%d\n", iRet);
    }

    free(ptr);

    return 0;
}