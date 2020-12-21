

/* Problem statement: We have to design application for tourist company.
Tourist company provides cars on rent.
Depends on the running of car they apply rent. 
If running is less than 100 kilometres then they charge 25
rupees per kilometre .
And if running is more than 100 kilometres then they apply 15
rupees per kilometre after 100 kilometres.
We have to accept number of kilometres from user and return
the estimated rent.      
Input : 73 Output : 1825
Input : 132 Output : 2980
Input : 189 Output : 3835  */

#include <stdio.h>

int TouristBill(int iKilometer)
{
    if (iKilometer < 100)
    {
        return (25 * iKilometer);
    }
    else
    {
        return (15 * iKilometer + 1000);
    }
}

int main()
{
    int iKilom = 0, iRent = 0;

    printf("Enter the number of Kilometeres\n");
    scanf("%d", &iKilom);

    iRent = TouristBill(iKilom);

    printf("Estimated Rent for given kilometeres:%d\n", iRent);
    return 0;
}