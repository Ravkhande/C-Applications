// a   b   c   d   e   f   g   h   i   j   k   l   m   n   o   p   q   r   s   t   u   v   w   x   y   z

/*
        lseek(fd,offset,Position)
Parameters :
1 : File descriptor
2 : Offset (Positive / negative)
3 :     SEEK_SET    -> From staring positioon of file
         SEEK_CUR   -> From current position of file
         SEEK_END   -> From the ened of file

 */

//  Accept file name, position and size form user and read that number of bytes of data from the position.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void FileRead(char *name, int position, int size)
{
    int fd = 0, ret = 0;
    char *Mug = NULL;
    
    Mug = (char *)malloc(size);
    
    fd = open(name,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return;
    }
    // Change the current offset
    ret = lseek(fd,position,SEEK_SET);
    
    ret = read(fd,Mug,size);
    
    write(1,Mug,ret);
    
    printf("\n");
    close(fd);
    free(Mug);
}
int main()
{
    char name[20];
    int value = 0;
    int size = 0;
    
    printf("Enter file name\n");
    scanf("%s",name);
    
    printf("Enter the position\n");
    scanf("%d",&value);

    printf("Enter number of bytes that you want to read\n");
    scanf("%d",&size);
    
    FileRead(name,value,size);
    
    return 0;
}
