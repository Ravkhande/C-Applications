
/*  Write a program which accept file name which contains information of
student and display addition of marks of all sudents. 
*/

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
    int i = 0, fd = 0, size = 0;
    struct student sobj;

    fd = open(FName, O_WRONLY | O_CREAT);
    if (fd == -1)
    {
        printf("Unnable to open the file\n");
        return;
    }

    printf("Enter the numeber of students:\n");
    scanf("%d", &size);

    for (i = 1; i <= size; i++)
    {
        printf("Enter the Roll no of student:\n");
        scanf("%d", &sobj.RNo);

        printf("Enter the Name of student:\n");
        scanf("%s", &sobj.name);

        printf("Enter the Address of student:\n");
        scanf(" %[^'\n']s", &sobj.Address);

        printf("Enter the Division of student:\n");
        scanf(" %c", &sobj.Div);

        printf("Enter the Marks of student:\n");
        scanf(" %d", &sobj.Marks);

        write(fd, &sobj, sizeof(sobj));
    }

    close(fd);
}

int FileRead(char FName[])
{
    int ret = 0, fd = 0, iSum = 0;
    struct student sobj;

    fd = open(FName, O_RDONLY);
    if (fd == -1)
    {
        printf("Unnable to open the file\n");
        return -1;
    }

    while ((ret = read(fd, &sobj, sizeof(sobj))) != 0)
    {
        iSum = iSum + (sobj.Marks);
    }

    close(fd);
    return iSum;
}

int main()
{
    char name[30] = {'\0'};
    int sum = 0;

    printf("Enter the file name:\n");
    scanf("%s", name);

    FileWrite(name);
    sum = FileRead(name);
    printf("Addition of all the marks of students is :%d\n", sum);

    return 0;
}