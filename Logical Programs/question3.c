
/* problem statement:  Design application for school management system.
As school is primary there are 4 standards from 1 to 4.
School fees of each standard is different.
For first standard fees are 8900, for second standard 12790, for
third standard 21000 and for fourth standard fees are 23450.
We have to accept standard from user and display the
corresponding fees. 
*/

#include <stdio.h>
void SchoolFees(int iStandard)
{
    switch (iStandard)
    {
    case 1:
        printf("Fees is 8900\n");
        break;

    case 2:
        printf("Fees is 12790\n");
        break;

    case 3:
        printf("Fees is 21000\n");
        break;

    case 4:
        printf("Fees is 23450\n");
        break;

    default:
        printf("Wrong Input");
        break;
    }
}

int main()
{
    int iStd;
    printf("Enter the standards of students\n");
    scanf("%d", &iStd);

    SchoolFees(iStd);

    return 0;
}