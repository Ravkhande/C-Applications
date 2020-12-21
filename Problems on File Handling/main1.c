
/* Write a program which accepts file name from user and count number of
capital characters from that file.

Input : Demo.txt
Output : Number of capital characters are 23 
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <io.h>

int CountCapital(char FName[])
{
    char arr[100] = {'\0'};
    int fd = 0, ret = 0, iCnt = 0, i = 0;

    fd = open(FName, O_RDONLY);
    if (fd == -1)
    {
        printf("Unnable to read the file\n");
        return -1;
    }

    while ((ret = read(fd, arr, sizeof(arr))) != 0)
    {
        for (i = 0; i < ret; i++)
        {
            if ((arr[i] >= 'A') && (arr[i] <= 'Z'))
            {
                iCnt++;
            }
        }
    }

    close(fd);
    return iCnt;
}

int main()
{
    char FileName[30] = {'\0'};
    int iRet = 0;

    printf("Enter the file name:\n");
    scanf("%s", FileName);

    iRet = CountCapital(FileName);
    printf("Number of Capital characters are : %d\n", iRet);

    return 0;
}