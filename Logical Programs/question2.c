
/* problem statement: Design application for income tax department to calculate tax
amount. According to the income tax department there is no
income tax for the income less than 5 lakhs.
If income is in between 5 to 10 lakhs then there will be 10% tax.
If income is in between 10 to 20 lakhs then there will be 20%
tax.
And for more than 20 lakhs there will be 30% tax.
We have to accept gross income from user and return the tax
amount.     
Input : 600000 Output : 10000 (0 + 10000)
Input : 450000 Output : 0
Input : 1200000 Output : 90000 (0 + 50000 + 40000)  */

#include <stdio.h>

float IncomeTax(int iAmount)
{
    if (iAmount < 500000)
    {
        return 0;
    }
    else if (iAmount > 500000 && iAmount < 1000000)
    {
        (iAmount * 0.1);
    }
    else if (iAmount > 1000000 && iAmount < 2000000)
    {
        (iAmount * 0.2);
    }
    else
    {
        return (iAmount * 0.3);
    }
}

int main()
{
    int iIncome = 0;
    float iTax = 0.0f;

    printf("Enter the Gross Income\n");
    scanf("%d", iIncome);

    iTax = IncomeTax(iIncome);

    printf("Tax Amount is :%f\n", iTax);

    return 0;
}
