
/*  Write application which accept file name from user and one string from user. Write
that string at the end of file.
Input : Demo.txt
        Hello World
Output : Write Hello World at the end of Demo.txt file 
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <io.h>
#include <string.h>

void WriteAtEnd(char FName[], char Name[])
{
    int ret = 0, fd = 0, length = 0;

    fd = open(FName, O_WRONLY | O_CREAT);
    if (fd == -1)
    {
        printf("Unnable to open that file\n");
        return;
    }

    length = strlen(Name);

    ret = lseek(fd, 0, SEEK_END);
    printf("Data from file is :\n");

    write(fd, Name, length);

    close(fd);
}

int main()
{
    char Fname[30] = {'\0'};
    char name[30] = {'\0'};

    printf("Enter the file name\n");
    scanf("%s", Fname);

    printf("Enter the string:\n");
    scanf(" %[^'\n']s", name);

    WriteAtEnd(Fname, name);
    return 0;
}