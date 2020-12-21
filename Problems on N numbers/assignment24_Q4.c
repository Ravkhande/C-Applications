
/* Problem statement: Accept N numbers from user and display all such numbers which contains
3 digits in it.  */

#include <stdio.h>  // for printf and scanf Library function
#include <stdlib.h> //for malloc Library function

void Digits(int Arr[], int iLength)
{
    int iCnt = 0, iNo = 0, iDigit = 0, iSum = 0, iNo1 = 0, iCount = 0;
    if (Arr == NULL)
    {
        printf("Unable to allocate the memory\n");
    }

    if (iLength <= 0)
    {
        printf("Invalid size\n");
    }

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];
        iNo1 = Arr[iCnt];
        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            iCount++;
            
        }

        if (iCount == 3)
        {
           printf("%d\t", Arr[iCnt]);
        }
    }

 }

    

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements\n");
    scanf("%d", &iSize);

    if (iSize == 0)
    {
        return -1;
    }

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

    Digits(p, iSize);

    free(p);
    return 0;
}