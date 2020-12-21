
/* Menu Driven program of Doubly circular Linked list         */

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

    if ((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;
        *Head = newn;
    }

    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void Display(PNODE Head, PNODE Tail)
{
    if ((Head == NULL) && (Tail == NULL))
    {
        return;
    }

    do
    {
        printf("|%d|<->", Head->data);
        Head = Head->next;
    } while (Head != Tail->next);
}

int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;

    if ((Head == NULL) && (Tail == NULL))
    {
        return 0;
    }

    do
    {
        iCnt++;
        Head = Head->next;
    } while (Head != Tail->next);

    return iCnt;
}

void InsertLast(PPNODE Head, PPNODE Tail, int value)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;
    newn->prev = NULL;

    if ((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->prev = *Tail;
        (*Tail)->next = newn;
        *Tail = newn;
    }

    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if ((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if (*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Head = (*Head)->next;
        //free((*Tail)->next);
        free((*Head)->prev);
    }

    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    if ((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if (*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Tail = (*Tail)->prev;
        //free((*Head)->prev);
        free((*Tail)->next);
    }

    (*Tail)->next = *Head;
    (*Head)->prev = *Tail;
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int value, int pos)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    int size = 0, i = 0;

    size = Count(*Head, *Tail);

    if ((pos < 1) || (pos > size + 1))
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

        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }
}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int pos)
{
    int size = 0, i = 0;
    PNODE temp = *Head;

    size = Count(*Head, *Tail);

    if ((pos < 1) || (pos > size))
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

        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    int iRet = 0, iChoice = 1, no = 0, iPos = 0;

    while (iChoice)
    {
        printf("\nMenu Driven Program of Doubly Circular Linked List\n");
        printf("______________________________________________________\n");
        printf(" 1:InsertFirst\n 2: Display\n 3: Count\n 4: InsertLast\n 5: DeleteFirst\n 6: DeleteLast\n 7: InsertAtPos\n 8: DeleteAtPos\n 9: Exit\n");
        printf("______________________________________________________\n");
        printf("Enter which operation do you perform\n");
        scanf("%d", &iChoice);

        switch (iChoice)
        {
        case 1:
            printf("Enter the number:\n");
            scanf("%d", &no);
            InsertFirst(&First, &Last, no);
            break;

        case 2:
            Display(First, Last);
            break;

        case 3:
            iRet = Count(First, Last);
            printf("\n Number of nodes in linked list is : %d\n", iRet);
            break;

        case 4:
            printf("Enter the number:\n");
            scanf("%d", &no);
            InsertLast(&First, &Last, no);
            break;

        case 5:
            DeleteFirst(&First, &Last);
            break;

        case 6:
            DeleteLast(&First, &Last);
            break;

        case 7:
            printf("Enter the number:\n");
            scanf("%d", &no);

            printf("Enter the position:\n");
            scanf("%d", &iPos);

            InsertAtPos(&First, &Last, no, iPos);
            break;

        case 8:
            printf("Enter the position:\n");
            scanf("%d", &iPos);

            DeleteAtPos(&First, &Last, iPos);
            break;

        case 9:
            exit(0);
        }
    }

    return 0;
}
