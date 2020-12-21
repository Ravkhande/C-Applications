/*
Accept N numbers from user and return difference between frequency of
even number and odd numbers.
Input : N : 7
 Elements : 85 66 3 80 93 88 90
Output : 1 (4 -3)
*/

#include <stdio.h>  // for printf and scanf Library function
#include <stdlib.h> //for malloc Library function

#define ERRMEMORY -1
#define ERRSIZE -2

// int CountEven(int *arr,int iNo)
int Frequency(int arr[], int iSize)
{
    int iCnt = 0; // for loop counter
    int iEven = 0;
    int iOdd = 0;

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
        else
        {
            iOdd++;
        }
    }

    return (iEven - iOdd);
}

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d", &iLength);

    p = (int *)malloc(iLength * sizeof(int));

    if (p == NULL)
    {
        printf("Error: Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n", iLength);

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element : %d\n", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iLength);

    if (iRet == ERRMEMORY)
    {
        printf("Error: Unable to allocate the memory\n");
    }
    else if (iRet == ERRSIZE)
    {
        printf("Error: Invalid size\n");
    }
    else
    {
        printf("Difference of Even odd frequency: %d\n", iRet);
    }

    free(p);
    return 0;
}
