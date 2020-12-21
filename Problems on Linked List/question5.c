
/* problem sattement: Write a program which return smallest element from singly linear linked
list.
Function Prototype :int Minimum( PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 20
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
    else
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
    printf("NULL");
}

int Minimum(PNODE Head)
{
    int iMin = 0;

    iMin = Head->data;

    while (Head != NULL)
    {

        if (iMin > (Head->data))
        {
            iMin = Head->data;
        }

        Head = Head->next;
    }

    return iMin;
}

int main()
{
    PNODE First = NULL;
    int no = 0, iRet = 0;

    printf("Enter the number1\n");
    scanf("%d", &no);

    if (no < 0)
    {
        no = -no;
    }

    InsertFirst(&First, no);

    printf("Enter the number2\n");
    scanf("%d", &no);

    if (no < 0)
    {
        no = -no;
    }

    InsertFirst(&First, no);

    printf("Enter the number3\n");
    scanf("%d", &no);

    if (no < 0)
    {
        no = -no;
    }

    InsertFirst(&First, no);

    printf("Enter the number4\n");
    scanf("%d", &no);

    if (no < 0)
    {
        no = -no;
    }

    InsertFirst(&First, no);

    printf("Enter the number5\n");
    scanf("%d", &no);

    if (no < 0)
    {
        no = -no;
    }

    InsertFirst(&First, no);

    Display(First);

    iRet = Minimum(First);

    printf("\n Smallest element from linked list is: %d\n", iRet);

    return 0;
}
