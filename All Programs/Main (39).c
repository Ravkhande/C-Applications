#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char name[20] = {'\0'};
    int fd = 0;     // File descriptor
    
    printf("Enter file name\n");
    scanf("%s",name);
    
    fd = open(name,O_RDWR); // File gets opened with read and write mode
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File succesfully opened with fd %d\n",fd);
    }
    
    close(fd);
    return 0;
}

