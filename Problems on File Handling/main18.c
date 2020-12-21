
/*  Write a program which accept file name which contains information of
student and display all names of students having marks greater than 90. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <io.h>

struct student
{
    int Rno;
    char Name[30];
    char Address[30];
    char Div;
    int Marks;
};

void FileWrite(char FName[])
{
    char Mug[100];
    int i = 0, ret = 0, fd = 0, size = 0;
    struct student sobj;

    fd = open(FName, O_WRONLY | O_CREAT);
    if (fd == -1)
    {
        printf("Unnable to open the file\n");
        return;
    }

    printf("Enter the number of students:\n");
    scanf("%d", &size);

    for (i = 1; i <= size; i++)
    {
        printf("Enter the roll no of student:\n");
        scanf("%d", &sobj.Rno);

        printf("Enter the name of student:\n");
        scanf("%s", &sobj.Name);

        printf("Enter the Address of student:\n");
        scanf(" %[^'\n']s", &sobj.Address);

        printf("Enter the Division of student:\n");
        scanf(" %c", &sobj.Div);

        printf("Enter the marks of student:\n");
        scanf(" %d", &sobj.Marks);

        write(fd, &sobj, sizeof(sobj));
    }

    close(fd);
}

void FileRead(char FName[])
{
    int ret = 0, fd = 0, i = 0;
    char Mug[100];
    struct student sobj;

    fd = open(FName, O_RDONLY);
    if (fd == -1)
    {
        printf("Unnable to open the file\n");
        return;
    }

    while ((ret = read(fd, &sobj, sizeof(sobj))) != 0)
    {
        if (sobj.Marks > 90)
        {

            printf("Name of student whose marks is Greater than 90: %s\n", sobj.Name);
        }
    }

    close(fd);
}

int main()
{
    char name[30] = {'\0'};

    printf("Enter the file name:\n");
    scanf("%s", name);

    FileWrite(name);
    FileRead(name);

    return 0;
}