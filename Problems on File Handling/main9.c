
/* Write a program which accepts file name and one character from user and
count number of occurrences of that characters from that file.

Input : Demo.txt        ‘M’
Output : Frequency of M is 7  
*/

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <io.h>

int CountOneChar(char FName[], char Ch)
{
    char Mug[100] = {'\0'};
    int fd = 0, ret = 0, i = 0, iCnt = 0;

    fd = open(FName, O_RDONLY);

    if (fd == -1)
    {
        printf("Unnable to open the file:\n");
        return -1;
    }

    while ((ret = read(fd, Mug, sizeof(Mug))) != 0)
    {
        for (i = 0; i < ret; i++)
        {
            if (Mug[i] == Ch)
            {
                iCnt++;
            }
        }
    }

    close(fd);
    return iCnt;
}

int main()
{
    char name[20] = {'\0'}, ch = '\0';
    int iRet = 0;

    printf("Enter the file name:\n");
    scanf("%s", name);

    printf("Enter one character\n");
    scanf(" %c", &ch);

    iRet = CountOneChar(name, ch);
    printf("Number of occurances of that character is : %d\n", iRet);

    return 0;
}