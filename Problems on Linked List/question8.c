
/* Problem satement: Write a program which returns addition of all even element from singly
linear linked list.
Function Prototype :int AdditionEven( PNODE Head);
Input linked list : |11|->|20|->|32|->|41|
Output : 52
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

int AdditionEven(PNODE Head)
{
    int iSum = 0;
    while (Head != NULL)
    {
        if ((Head->data) % 2 == 0)
        {
            iSum = iSum + (Head->data);
        }
        Head = Head->next;
    }

    return iSum;
}

int main()
{
    PNODE First = NULL;
    int no = 0, iRet = 0;

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

    Display(First);

    iRet = AdditionEven(First);

    printf("\nAddition of all the even elements are : %d\n", iRet);

    return 0;
}
