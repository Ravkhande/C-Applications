
/* problem satement: Please complete below code snippet of Singly Circular Linkedlist.  */

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

void InsertFirst(struct Node **Head, int no)
{
    struct Node *newn = NULL;
    newn = (struct Node *)malloc(sizeof(struct Node));
    newn->data = no;
    newn->next = NULL;

    if (*Head != NULL) // if linked list is empty
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void InsertLast(struct Node **Head, int no)
{
    struct Node *temp = *Head;
    struct Node *newn = NULL;
    newn = (struct Node *)malloc(sizeof(struct Node));
    newn->data = no;
    newn->next = NULL;

    if (*Head == NULL) //if LL is empty
    {
        *Head = newn;
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void InsertAtPos(struct Node **Head, int no, int pos)
{
    int size = 0, i = 0;
    struct Node *temp = *Head;
    struct Node *newn = NULL;

    size = Count(*Head);

    if ((pos < 1) || (pos > size + 1))
    {
        return;
    }
    else if (pos == 1)
    {
        InsertFirst(Head, no);
    }
    else if (pos == size + 1)
    {
        InsertLast(Head, no);
    }
    else
    {
        newn = (struct Node *)malloc(sizeof(struct Node));
        newn->data = no;
        newn->next = NULL;

        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteFirst(struct Node **Head)
{
    struct Node *temp = *Head;

    if (*Head == NULL)
    {
        return;
    }
    else if ((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        *Head = (*Head)->next;
        free(temp);
    }
}

void DeleteLast(struct Node **Head)
{
    struct Node *temp = *Head;

    if (*Head == NULL)
    {
        return;
    }
    else if ((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;
    }
}

void DeleteAtPos(struct Node **Head, int pos)
{
    int i = 0, size = 0;
    size = Count(*Head);
    struct Node *temp = *Head;
    struct Node *temp2 = NULL;

    if ((pos < 1) || (pos > size))
    {
        return;
    }
    else if (pos == 1)
    {
        DeleteFirst(Head);
    }
    else if (pos == size)
    {
        DeleteLast(Head);
    }
    else
    {
        for (i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        temp2 = temp->next;
        temp->next = temp2->next;
        free(temp2);
    }
}

void Display(struct Node *Head)
{
    while (Head != NULL)
    {
        printf("|%d|->", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Count(struct Node *Head)
{
    int iCnt = 0;

    while (Head != NULL)
    {
        iCnt++; //printf("|%d|->",Head->data);
        Head = Head->next;
    }

    return iCnt;
}

int main()
{
    PNODE First = NULL; // PT chya sirane lakshat thevalela mulacha address
    int no = 0, iRet = 0, iPos = 0, ch = 0;

    printf("1. InsertFirst\n");
    printf("2. Display\n");
    printf("3. Count\n");
    printf("4. InsertLast\n");
    printf("5. InsertAtPos\n");
    printf("6. DeleteFirst\n");
    printf("7. DeleteLast\n");
    printf("8. DeleteAtPos\n");
    printf("9.Exit\n");

    printf("Enter which operation do you want to perform:\n");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:

        printf("Enter the number1:\n");
        scanf("%d", &no);
        InsertFirst(&First, no);

        printf("Enter the number2:\n");
        scanf("%d", &no);
        InsertFirst(&First, no);

        printf("Enter the number3:\n");
        scanf("%d", &no);
        InsertFirst(&First, no);

        Display(First);
        iRet = Count(First);
        printf("Number of nodes in Linked List are: %d\n", iRet);

        break;

    case 2:

        Display(First);

        break;

    case 3:

        iRet = Count(First);
        printf("Number of nodes in Linked List are: %d\n", iRet);
        break;

    case 4:

        printf("Enter the number1:\n");
        scanf("%d", &no);
        InsertLast(&First, no);

        printf("Enter the number2:\n");
        scanf("%d", &no);
        InsertLast(&First, no);

        Display(First);
        iRet = Count(First);
        printf("Number of nodes in Linked List are: %d\n", iRet);

        break;

    case 5:

        printf("Enter the number:\n");
        scanf("%d", &no);

        printf("Enter the position:\n");
        scanf("%d", &iPos);

        InsertAtPos(&First, no, iPos);

        Display(First);
        iRet = Count(First);
        printf("Number of nodes in Linked List are: %d\n", iRet);

        break;

    case 6:

        DeleteFirst(&First);

        Display(First);
        iRet = Count(First);
        printf("Number of nodes in Linked List are: %d\n", iRet);

        break;

    case 7:

        DeleteLast(&First);

        Display(First);
        iRet = Count(First);
        printf("Number of nodes in Linked List are: %d\n", iRet);

        break;

    case 8:

        printf("Enter the position:\n");
        scanf("%d", &iPos);

        DeleteAtPos(&First, iPos);

        Display(First);
        iRet = Count(First);
        printf("Number of nodes in Linked List are: %d\n", iRet);

        break;

    case 9:
        exit(0);
    }

    return 0;
}
