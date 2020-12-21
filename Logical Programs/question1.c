
/* Problem statement: Design application for hotel. According to the management
team of hotel they are giving discount on total bill amount of
customer.
If bill bill amount is less than 500 then there is no discount , if
bill amount is less than 1500 and more than 500 they give 10%
discount.
And if the bill amount is more than 1500 then they give 15%
discount.
Our application should accept total bill amount and depends on
the discount policy we have to return the amount after applying
discount.      */

#include <stdio.h>

#define TEN 0.1
#define FIFTEEN 0.15

float CalculateBill(int iAmount)
{
    float iDiscount = 0.0f;
    if (iAmount < 500)
    {
        return iAmount;
    }
    else if (iAmount < 1500 && iAmount > 500)
    {
        iDiscount = TEN * (iAmount);
        return (iAmount - iDiscount);
    }
    else
    {
        iDiscount = FIFTEEN * (iAmount);
        return (iAmount - iDiscount);
    }
}

int main()
{
    int iValue = 0;
    float iRet = 0.0f;

    printf("Enter the total bill Amount\n");
    scanf("%d", &iValue);

    iRet = CalculateBill(iValue);

    printf("Amount after applying the discount:%f\n", iRet);
    return 0;
}
