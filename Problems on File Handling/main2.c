
/*  Write application which accept file name from user and create that file.
Input : Demo.txt
Output : File created successfully. 
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

    fd = creat(name, 0777);

    if (fd == -1)
    {
        printf("Unnable to create that file\n");
    }
    else
    {
        printf("File is sucusefully created with file descriptor : %d\n", fd);
    }

    close(fd);
    return 0;
}