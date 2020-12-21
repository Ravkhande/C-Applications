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

//  Accept file name and position from user and read the 10 bytes of data from that position.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void FileRead(char *name, int position)
{
    int fd = 0, ret = 0;
    char Mug[10] = {'\0'};
    fd = open(name,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return;
    }
    // Change the current offset
    ret = lseek(fd,position,SEEK_SET);
    printf("Return value of lseek : %d\n",ret);
    
    ret = read(fd,Mug,10);
    printf("Data from the file is : \n");
    
    printf("Return value of read : %d\n",ret);
    write(1,Mug,ret);
    
    printf("\n");
    close(fd);
}
int main()
{
    char name[20];
    int value = 0;
    
    printf("Enter file name\n");
    scanf("%s",name);
    
    printf("Enter the position\n");
    scanf("%d",&value);
    
    FileRead(name,value);
    
    return 0;
}
