
/* Problem satement:  Write a program which displays all elements which are perfect from singly
linear linked list.

Function Prototype :int DisplayPerfect(PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : 6 28 
*/

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

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
    printf("NULL");
}

void DisplayPerfect(PNODE Head)
{
    int i = 0, iSum = 0;

    while (Head != NULL)
    {
        iSum = 0;
        for (i = 1; i <= ((Head->data) / 2); i++)
        {
            if (((Head->data) % i) == 0)
            {
                iSum = iSum + i;
            }
        }

        if (iSum == (Head->data))
        {
            printf("\n Perfect elements are : %d\t", (Head->data));
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

    DisplayPerfect(First);

    return 0;
}
