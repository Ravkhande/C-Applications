/* Write application which accept file name from user and read all data from that file
and display contents on screen.  */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

void DisplayAllData(char FName[])
{
    int fd = 0, ret = 0;
    char arr[100] = {'\0'};

    fd = open(FName, O_RDONLY);
    if (fd == -1)
    {
        printf("Unnable to open that file\n");
        return;
    }

    printf("Data from file is : \n");

    while ((ret = read(fd, arr, 100)) != 0)
    {
        write(1, arr, ret);
    }
    close(fd);
}

int main()
{
    char name[20] = {'\0'};

    printf("Enter the file name:\n");
    scanf("%s", name);

    DisplayAllData(name);

    return 0;
}