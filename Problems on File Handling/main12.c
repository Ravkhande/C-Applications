
/*  Write a program which read all the information of students from the
file. */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <io.h>

struct student
{
    int RNo;
    char name[30];
    char Address[30];
    char Div;
    int Marks;
};

void FileWrite(char FName[])
{
    int fd = 0, i = 0, size = 0;
    char Mug[100];

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
        printf("Enter the roll no of student\n");
        scanf("%d", &sobj.RNo);

        printf("Enter the name of student\n");
        scanf("%s", &sobj.name);

        printf("Enter the Address of student\n");
        scanf(" %[^'\n']s", &sobj.Address);

        printf("Enter the Division of student\n");
        scanf(" %c", &sobj.Div);

        printf("Enter the marks of student\n");
        scanf(" %d", &sobj.Marks);

        write(fd, &sobj, sizeof(sobj));
    }

    close(fd);
}

void FileRead(char FName[])
{
    int i = 0, ret = 0, fd = 0;
    struct student sobj;

    fd = open(FName, O_RDONLY);
    if (fd == -1)
    {
        printf("Unnable to read the file\n");
        return;
    }

    printf("Data from file is :\n");

    while ((ret = read(fd, &sobj, sizeof(sobj))) != 0)
    {
        printf("_______________________________________________\n");
        printf("Roll no of student is : %d\n", sobj.RNo);
        printf("Name of student is : %s\n", sobj.name);
        printf("Address of student is : %s\n", sobj.Address);
        printf("Division of student is :%c\n", sobj.Div);
        printf("Marks of student is :%d\n", sobj.Marks);
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