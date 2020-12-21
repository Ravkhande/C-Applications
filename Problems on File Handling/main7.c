
/* Write a program which accepts file name from user and count number of
small characters from that file.

Input : Demo.txt
Output : Number of small characters are 21 
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <io.h>

int CountSmall(char FName[])
{
    char arr[100] = {'\0'};
    int i = 0, ret = 0, fd = 0, iCnt = 0;

    fd = open(FName, O_RDONLY);
    if (fd == -1)
    {
        printf("Unnable to open the file\n");
        return -1;
    }

    while ((ret = read(fd, arr, sizeof(arr))) != 0)
    {
        for (i = 0; i < ret; i++)
        {
            if ((arr[i] >= 'a') && (arr[i] <= 'z'))
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
    char name[20] = {'\0'};
    int fd = 0, iRet = 0;

    printf("Enter the file name:\n");
    scanf("%s", name);

    iRet = CountSmall(name);
    printf("Number of small characters are: %d\n", iRet);
    return 0;
}