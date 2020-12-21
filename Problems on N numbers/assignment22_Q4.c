

#include <stdio.h>  // for printf and scanf Library function
#include <stdlib.h> //for malloc Library function

#define ERRMEMORY -1
#define ERRSIZE -2

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iFreq = 0;
    if (Arr == NULL)
    {
        return ERRMEMORY;
    }

    if (iLength <= 0)
    {
        return ERRSIZE;
    }

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            iFreq++;
        }
    }

    return iFreq;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements\n", iSize);

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize);

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
        printf("Frequency of 11 are :%d\n", iRet);
    }

    free(p);
    return 0;
}