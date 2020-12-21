
/* Problem Statement: WAP which accept N number from user and return the frequency of even numbers from that N number   */

#include <stdio.h>  // for printf and scanf Library function
#include <stdlib.h> //for malloc Library function

#define ERRMEMORY -1
#define ERRSIZE -2

// int CountEven(int *arr,int iNo)
int CountEven(int arr[], int iSize)
{
    int iCnt = 0;  // for loop counter
    int iEven = 0; //for counting frequency of even number

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
            iEven++;
        }
    }

    return iEven;
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

    printf("Enter the N numbers\n");

    for (iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = CountEven(ptr, iValue); // CountEven(100,5);

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
        printf("Frequency of Even number are:%d\n", iRet);
    }

    free(ptr);

    return 0;
}