
/* problem satement: Please complete below code snippet of Doubly Circular Linkedlist */

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int value)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;
    newn->prev = NULL;

    if ((*Head == NULL) && (*Tail == NULL)) // if Linked list is empty
    {
        *Head = newn;
        *Tail = newn;
    }
    else // if linked list contain atlest one node and more than one node
    {
        newn->next = *Head;
        (*Head)->prev = newn;
        *Head = (*Head)->prev;
    }

    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void InsertLast(PPNODE Head, PPNODE Tail, int value)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;
    newn->prev = NULL;

    if (*Head == NULL && *Tail == NULL) // if LL is empty
    {
        *Head = newn;
        *Tail = newn;
    }
    else // if LL contain atlest one node
    {
        newn->prev = *Tail;
        (*Tail)->next = newn;
        *Tail = (*Tail)->next;
    }

    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void Display(PNODE Head, PNODE Tail)
{
    if (Head == NULL && Tail == NULL) // if LL is empty
    {
        return;
    }
    else // if LL contain atlest one node
    {
        do
        {
            printf("| %d |<=>", Head->data);
            Head = Head->next;
        } while (Head != Tail->next);
    }
    printf("\n");
}

int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;
    if (Head == NULL && Tail == NULL) // if LL is empty
    {
        return -1;
    }
    else // if LL contain atlest one node
    {
        do
        {
            iCnt++;
            Head = Head->next;
        } while (Head != Tail->next);
    }
    return iCnt;
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if (*Head == NULL && *Tail == NULL) // if LL is empty
    {
        return;
    }
    else if ((*Head)->next == *Tail) // if LL contain only one Node
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else // if LL contain more than one node
    {
        *Head = (*Head)->next;
        free((*Head)->prev);
    }

    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    if (*Head == NULL && *Tail == NULL) // if LL is empty
    {
        return;
    }
    else if ((*Head)->next == *Tail) // if LL contain only one Node
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else // if LL contain more than one node
    {
        free(*Tail);
        *Tail = (*Tail)->prev;
    }

    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int value, int pos)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    int i = 0, size = 0;

    size = Count(*Head, *Tail);

    if ((pos < 1) || (pos > size + 1)) // Invalid position
    {
        return;
    }
    else if (pos == 1)
    {
        InsertFirst(Head, Tail, value);
    }
    else if (pos == size + 1)
    {
        InsertLast(Head, Tail, value);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = value;
        newn->next = NULL;
        newn->prev = NULL;

        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = *Tail;
        (*Tail)->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }

    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int pos)
{
    PNODE temp = *Head;
    PNODE temp2 = NULL;
    int i = 0, size = 0;

    size = Count(*Head, *Tail);

    if ((pos < 1) || (pos > size)) //Invalid position
    {
        return;
    }
    else if (pos == 1)
    {
        DeleteFirst(Head, Tail);
    }
    else if (pos == size)
    {
        DeleteLast(Head, Tail);
    }
    else
    {
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        temp2 = (temp->next);
        temp->next = temp2->next;
        free(temp2);
        (*Tail)->prev = temp;
    }

    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    int no = 0, iRet = 0, ipos = 0;

    printf("Enter the number1:\n");
    scanf("%d", &no);
    InsertFirst(&First, &Last, no);

    printf("Enter the number2:\n");
    scanf("%d", &no);
    InsertFirst(&First, &Last, no);

    printf("Enter the number3:\n");
    scanf("%d", &no);
    InsertFirst(&First, &Last, no);

    printf("Enter the number4:\n");
    scanf("%d", &no);
    InsertFirst(&First, &Last, no);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of Nodes in Linked list is: %d\n", iRet);

    printf("Enter the number1:\n");
    scanf("%d", &no);
    InsertLast(&First, &Last, no);

    printf("Enter the number2:\n");
    scanf("%d", &no);
    InsertLast(&First, &Last, no);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of Nodes in Linked list is: %d\n", iRet);

    DeleteFirst(&First, &Last);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of Nodes in Linked list is: %d\n", iRet);

    DeleteLast(&First, &Last);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of Nodes in Linked list is: %d\n", iRet);

    printf("Enter the number\n");
    scanf("%d", &no);
    printf("Enter the position\n");
    scanf("%d", &ipos);

    InsertAtPos(&First, &Last, no, ipos);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of Nodes in Linked list is: %d\n", iRet);

    printf("Enter the position\n");
    scanf("%d", &ipos);

    DeleteAtPos(&First, &Last, ipos);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of Nodes in Linked list is: %d\n", iRet);

    return 0;
}