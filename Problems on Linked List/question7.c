
/* Problem satement:  Write a program which displays all elements which are prime from singly
linear linked list.
Function Prototype :int DisplayPrime( PNODE Head);
Input linked list : |11|->|20|->|17|->|41|->|22|->|89|
Output : 11 17 41 89 
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

    if (*Head == NULL) // if Linked list is empty
    {
        *Head = newn;
    }
    else // if linked list contain atleast one Node
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("\n");

    while (Head != NULL)
    {
        printf("|%d|->", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

void DisplayPrime(PNODE Head)
{
    int i = 0, iCnt = 0;
    while (Head != NULL)
    {
        iCnt = 0;
        for (i = 1; i <= (Head->data); i++)
        {
            if (((Head->data) % i) == 0)
            {
                iCnt++;
            }
        }

        if (iCnt == 2)
        {
            printf("\n The given element is prime :%d\t", (Head->data));
        }

        Head = Head->next;
    }
}

int main()
{
    PNODE First = NULL;
    int no = 0;

    printf("Enter the number1\n");
    scanf("%d", &no);

    InsertFirst(&First, no);

    printf("Enter the number2\n");
    scanf("%d", &no);

    InsertFirst(&First, no);

    printf("Enter the number3\n");
    scanf("%d", &no);

    InsertFirst(&First, no);

    printf("Enter the number4\n");
    scanf("%d", &no);

    InsertFirst(&First, no);

    printf("Enter the number5\n");
    scanf("%d", &no);

    InsertFirst(&First, no);

    printf("Enter the number6\n");
    scanf("%d", &no);

    InsertFirst(&First, no);

    Display(First);

    DisplayPrime(First);

    return 0;
}
