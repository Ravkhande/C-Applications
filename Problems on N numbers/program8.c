
/* Problem Statement: WAP which accept N number from user and return the frequency of even numbers from that N number   */

#include <stdio.h>  // for printf and scanf Library function
#include <stdlib.h> //for malloc Library function

#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0;
    BOOL iRet = FALSE;

    if (Arr == NULL)
    {
        printf("Error: unable to allocate memory\n");
    }

    if (iLength <= 0)
    {
        printf("Error: Invalid size\n");
    }

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

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

    bRet = Check(p, iSize);

    if (bRet == TRUE)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");
    }

    free(p);
    return 0;
}
