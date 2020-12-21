
/* problem satement: Write a program which display largest digits of all element from singly
linear linked list.

Function Prototype : 
void DisplayLarge( PNODE Head);
Input linked list : |11|->|250|->|532|->|419|
Output : 1 5 5 9 
*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if (*Head == NULL) // if linked list is empty
    {
        *Head = newn;
    }
    else // if linked list contain one node or more than one node
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("|%d|=>", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while (Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

void DisplayLarge(PNODE Head)
{
    int iDigit = 0, iMax = 0;

    if (Head == NULL) // if LL is empty
    {
        return;
    }
    else if (Head->next == NULL) // if LL contain one node
    {
        iMax = (Head->data) % 10;

        while (Head->data != 0)
        {
            iDigit = (Head->data) % 10;
            if (iMax < iDigit)
            {
                iMax = iDigit;
            }
            Head->data = (Head->data) / 10;
        }

        printf("%d\t", iMax);
    }
    else // if LL contain more than one node
    {
        while (Head != NULL)
        {
            iMax = (Head->data) % 10;

            while (Head->data != 0)
            {
                iDigit = (Head->data) % 10;
                if (iMax < iDigit)
                {
                    iMax = iDigit;
                }
                Head->data = (Head->data) / 10;
            }

            printf("%d\t", iMax);
            iMax = 0;
            Head = Head->next;
        }
    }
}

int main()
{
    PNODE First = NULL;
    int no = 0, iRet = 0;

    printf("Enter the number1:\n");
    scanf("%d", &no);
    InsertFirst(&First, no);

    printf("Enter the number2:\n");
    scanf("%d", &no);
    InsertFirst(&First, no);

    printf("Enter the number3:\n");
    scanf("%d", &no);
    InsertFirst(&First, no);

    printf("Enter the number4:\n");
    scanf("%d", &no);
    InsertFirst(&First, no);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes in the Linked list is: %d\n", iRet);

    DisplayLarge(First);

    return 0;
}
