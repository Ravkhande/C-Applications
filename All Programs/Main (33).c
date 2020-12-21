// Problem statement : Accept number from user and display all numbers in reverse format.
// Input : 4
// Output :    4   3  2    1

#include<stdio.h>

void DisplayI(int no)
{
    while(no > 0)
    {
        printf("%d\n",no);
        no--;
    }
}

void DisplayR(int no)
{
        if(no > 0)
        {
            printf("%d\t",no);
            no--;
            DisplayR(no);
        }
}

int main()
{
    int value = 0;
    printf("Enter number\n");
    scanf("%d",&value);     // 3
    
    DisplayR(value);
    
    printf("End of main");
    return 0;
}





// Contents of stack frame
// 1: Memory for local variable
// 2: Memory for input parameters
// 3: Address of next instruction to be executed
// 4: Value of old EBP
