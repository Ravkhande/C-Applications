
/* Write application which accept file name from user and open that file in read mode.
Input : Demo.txt
Output : File opened successfully. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    char name[20] = {'\0'};
    int fd = 0;

    printf("Enter the file name:\n");
    scanf("%s", name);

    fd = open(name, O_RDONLY | O_CREAT);
    if (fd == -1)
    {
        printf("Unnable to open that file\n");
    }
    else
    {
        printf("File is sucusefully opened with file descriptor : %d\n", fd);
    }

    close(fd);
    return 0;
}