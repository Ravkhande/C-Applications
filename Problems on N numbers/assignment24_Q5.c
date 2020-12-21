
/* Problem statement: WAP which Accept N numbers from user and display summation of digits of each
number. */

#include <stdio.h>  // for printf and scanf Library function
#include <stdlib.h> //for malloc Library function

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iNo = 0, iDigit = 0, iSum = 0;
    if (Arr == NULL)
    {
        printf("Error : unable to allocate the memory\n");
        return;
    }

    if (iLength <= 0)
    {
        printf("Invalid Size\n");
        return;
    }

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];
        iSum = 0;
        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        printf("Summation of %d digits is:%d\n", Arr[iCnt], iSum);
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter the value of N\n");
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

    DigitsSum(p, iSize);

    free(p);
    return 0;
}
