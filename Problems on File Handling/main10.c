
/*   Write a program which accepts file name and one count from user and read
that number of characters from starting position.

Input : Demo.txt                        12
Output : Display first 12 characters from Demo.txt 
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <io.h>

void DisplayN(char *FName, int size)
{
    int ret = 0, fd = 0;
    char *Mug = NULL;

    Mug = (char *)malloc(size);

    fd = open(FName, O_RDONLY);
    if (fd == -1)
    {
        printf("Unnable to open that file\n");
        return;
    }

    ret = lseek(fd, 0, SEEK_SET); //lseek function returns the offset/position

    ret = read(fd, Mug, size);

    printf("Data From file:\n");

    write(1, Mug, ret);

    printf("\n");

    close(fd);

    free(Mug);
}

int main()
{

    char name[30] = {'\0'};
    int iValue = 0;

    printf("Enter the file name\n");
    scanf("%s", name);

    printf("Enter the number of characters that we want to read\n");
    scanf("%d", &iValue);

    DisplayN(name, iValue);
    return 0;
}