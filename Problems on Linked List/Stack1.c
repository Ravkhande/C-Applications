
// Dynamic implementation of stack using linked list

//push     InsertFirst
// Pop      DeleteFirst
//////////////     In stack we used singly Linear Linked List  /////////////

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} NODE, *PNODE, **PPNODE;

void Push(PPNODE Head, int value) // same like InsertFirst
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;

    if (*Head == NULL) // if stack is empty
    {
        *Head = newn;
    }
    else // if stack contain atlest one element
    {
        newn->next = *Head;
        *Head = newn;
    }
}

int Pop(PPNODE Head)
{
    int no = 0;
    PNODE temp = *Head;

    if (*Head == NULL)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        no = (*Head)->data;
        *Head = (*Head)->next;
        free(temp);
        return no;
    }
}

int Peep(PNODE Head)
{
    int no = 0;
    if (Head == NULL)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        no = Head->data;
        return no;
    }
}

void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("| %d |\n", Head->data);
        Head = Head->next;
    }
}

int Count(PNODE Head)
{
    int iCnt = 0;
    while (Head != NULL)
    {
        iCnt++; //printf("|%d|->\n",Head->data);
        Head = Head->next;
    }

    return iCnt;
}

int main()
{
    PNODE First = NULL;
    int no = 0, choice = 1, iRet = 0;

    printf("\n Dynamic Implementation of stack\n");
    printf("_____________________________________________\n");

    while (choice != 0)
    {
        printf(" 1:Pushed the element in stack\n");
        printf(" 2:Poped the element from stack\n");
        printf(" 3:Display the element from stack\n");
        printf(" 4:Count the element from stack\n");
        printf(" 5:Peeped element from stack \n");
        printf(" 6:Exit\n");

        printf("Enter your choice:\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number:\n");
            scanf("%d", &no);
            Push(&First, no);
            break;

        case 2:
            iRet = Pop(&First);
            printf("\n Popped element is: %d\n", iRet);
            break;

        case 3:
            Display(First);
            break;

        case 4:
            iRet = Count(First);
            printf("\n Number of elements from stack is : %d\n", iRet);
            break;

        case 5:
            iRet = Peep(First);
            printf("\n Peeped element from stack is : %d\n", iRet);
            break;

        case 6:
            printf("Thanks");
            exit(0);
            break;

        default:
            printf("Error: Wrong option\n");
        }
    }
    return 0;
}
