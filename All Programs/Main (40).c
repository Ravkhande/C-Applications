// Application to open the file or to create new file

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
    
    fd = open(name,O_RDWR | O_CREAT, 0777);
    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File succesfully created with fd %d\n",fd);
    }
    
    close(fd);
    return 0;
}

