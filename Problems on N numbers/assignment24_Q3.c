
/* Problem Statement: WAP which Accept N numbers from user and return the difference between largest
and smallest number.   */

#include <stdio.h>  // for printf and scanf Library function
#include <stdlib.h> //for malloc Library function

// int Difference(int *arr,int iNo)
int Difference(int arr[], int iSize)
{
    int iCnt = 0; // for loop counter
    int iMin = 0, iMax = 0;

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

    iMin = arr[0];
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (iMin > arr[iCnt])
        {
            iMin = arr[iCnt];
        }
    }

    return (iMax - iMin);
}

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d", &iLength);

    if (iLength == 0)
    {
        return -1;
    }

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

    iRet = Difference(p, iLength);

    printf("Difference between largest and Smallest number is: %d\n", iRet);

    free(p);
    return 0;
}