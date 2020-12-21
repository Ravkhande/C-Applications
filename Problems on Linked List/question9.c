
/* Problem satement:  Write a program which return second maximum element from singly linear
linked list.

Function Prototype :int SecMaximum( PNODE Head);
Input linked list : |110|->|230|->|320|->|240|
Output : 240
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

int SecMaximum(PNODE Head)
{
    int iMax = 0, iSec = 0;

    iMax = Head->data;

    while (Head != NULL)
    {
        if (iMax < (Head->data))
        {
            iSec = iMax; // it is done to preserve the second maximum number
            iMax = Head->data;
        }
        else if ((Head->data) > iSec && (Head->data) != iMax) // it check whether current node is in between the iMax(first) and iSec
        {
            iSec = Head->data;
        }

        Head = Head->next;
    }

    return iSec;
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
    iRet = Count(First);
    printf("Number of node in linked list is :%d\n", iRet);

    iRet = SecMaximum(First);
    printf("Second maximum element is : %d\n", iRet);

    return 0;
}
