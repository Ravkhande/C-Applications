
/*  Write application which accept file name from user and display size of file.
Input : Demo.txt

Output : File size is 56 bytes   */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <io.h>

int DisplaySize(char FName[])
{
    char arr[100] = {'\0'};
    int fd = 0, ret = 0, iSize = 0;

    fd = open(FName, O_RDONLY);

    if (fd == -1)
    {
        printf("Unnable to open the file:\n");
        return -1;
    }

    ret = lseek(fd, 0, SEEK_END);

    close(fd);

    return ret;
}

int main()
{
    char name[30] = {'\0'};
    int size = 0;

    printf("Enter the file name:\n");
    scanf("%s", name);

    size = DisplaySize(name);

    printf("File Size is : %d Bytes\n ", size);

    return 0;
}