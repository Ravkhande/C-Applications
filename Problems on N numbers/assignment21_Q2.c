
/* Problem statement: Accept N numbers from user and display all such elements which are
divisible by 5. */

#include <stdio.h>  // for printf and scanf Library function
#include <stdlib.h> //for malloc Library function

#define ERRMEMORY -1
#define ERRSIZE -2

void Display(int arr[], int iSize)
{
    int iCnt = 0; // for loop counter

    if (arr == NULL) // if the pointer is unable to allocate the memory
    {
        printf("Error : unable to allocate memory\n");
        return;
    }

    if (iSize <= 0) //if the size of array is invalid
    {
        printf("Error: Invalid size\n");
        return;
    }

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((arr[iCnt] % 5) == 0)
        {
            printf("%d\n", arr[iCnt]);
        }
    }
}

int main()
{
    int iValue = 0;
    int *ptr = NULL;
    int iCnt = 0;
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

    Display(ptr, iValue);

    free(ptr);

    return 0;
}