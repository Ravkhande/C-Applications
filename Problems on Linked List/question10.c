
/* Problem satement:  Write a program which display addition of digits of element from singly
linear linked list.
Function Prototype :int SumDigit( PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 2 5 2 6 10 
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

void SumDigit(PNODE Head)
{
    int iDigit = 0, iSum = 0;

    while (Head != NULL)
    {
        while ((Head->data) != 0)
        {
            iDigit = ((Head->data) % 10);

            iSum = iSum + iDigit;

            Head->data = ((Head->data) / 10);
        }

        printf("\nAddition of Digits of Elements are :%d\t", iSum);

        iSum = 0;

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

    Display(First);

    SumDigit(First);

    return 0;
}
