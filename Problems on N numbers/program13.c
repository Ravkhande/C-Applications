
/* Problem Statement: WAP which accept N number from user and return the largest number  */

#include <stdio.h>  // for printf and scanf Library function
#include <stdlib.h> //for malloc Library function

// int Maximum(int *arr,int iNo)
int Maximum(int arr[], int iSize)
{
    int iCnt = 0; // for loop counter
    int iMax = 0;

    if (arr == NULL) // if the pointer is unable to allocate the memory
    {
        return -1;
    }

    if (iSize <= 0) //if the size of array is invalid
    {
        return -2;
    }

    iMax = arr[0];
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (iMax < arr[iCnt])
        {
            iMax = arr[iCnt];
        }
    }

    return iMax;
}

int main()
{
    int iValue = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;
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

    printf("Enter the N numbers\n");

    for (iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Maximum(ptr, iValue); // Maximum(100,5);

    printf("Largest number is :%d\n", iRet);

    free(ptr);

    return 0;
}
