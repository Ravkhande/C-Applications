/* Write a program which accepts file name from user and count number of
white spaces from that file.

Input : Demo.txt
Output : Number of white spaces are 13   */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int CountWhiteSpace(char FName[])
{
    int fd = 0, ret = 0, i = 0, iCnt = 0;
    char Mug[100] = {'\0'};

    fd = open(FName, O_RDONLY);
    if (fd == -1)
    {
        printf("Unnable to open that file\n");
        return -1;
    }

    while ((ret = read(fd, Mug, sizeof(Mug))) != 0)
    {
        for (i = 0; i < ret; i++)
        {
            if (Mug[i] == ' ')
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
    int iRet = 0;

    printf("Enter the file name:\n");
    scanf("%s", name);

    iRet = CountWhiteSpace(name);

    printf("Number of white spaces are : %d\n", iRet);

    return 0;
}