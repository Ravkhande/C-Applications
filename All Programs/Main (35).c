// Accept two numbers from user as X and Y and return X^Y

#include<stdio.h>

// X= 2 and Y = 4
// Result = 2 *2 * 2* 2

int PowerI(int X, int Y)
{
    int Result = 1;
    while(Y != 0)
    {
        Result = Result * X;
        Y--;
    }
    return Result;
}

int PowerR(int X, int Y)
{
    static int Result = 1;
    if(Y != 0)
    {
        Result = Result * X;
        Y--;
        PowerR(X,Y);
    }
    return Result;
}

int main()
{
    int no1 = 0, no2 = 0, iRet = 0;

    printf("Enter first number\n");
    scanf("%d",&no1);
    
    printf("Enter second number\n");
    scanf("%d",&no2);
    
    iRet = PowerR(no1,no2);
    
    printf("Result is %d",iRet);
    
    return 0;
}
