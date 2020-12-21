// Problem statement : Display 4 times Hello on screen

#include<stdio.h>

void DisplayS()     // Sequantial approach
{
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
}

void DisplayI()                // Iterative approach
{
    int i = 0;
    //      1         2     3
    for(i = 1; i<=4;i++)
    {
        printf("Hello\n");      //4
    }
}

void DisplayR()
{
    static int i = 1;
    
    if(i<=4)
    {
        printf("Hello\n");
        i++;
        DisplayR();
    }
}

int main()
{
    int value = 10;
    
    DisplayR();
    
    printf("End of main");
    return 0;
}





// Contents of stack frame
// 1: Memory for local variable
// 2: Memory for input parameters
// 3: Address of next instruction to be executed
// 4: Value of old EBP
