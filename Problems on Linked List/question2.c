
/* problem satement: Write a program which search last occurrence of particular element from
singly linear linked list.

Function should return position at which element is found.
Function Prototype :int SearchLastOcc( PNODE Head, int no );
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element : 30
Output : 6
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

int SearchLastOcc(PNODE Head, int no)
{
    int iCnt = 0, iPos = 0;

    while (Head != NULL)
    {
        iCnt++;
        if ((Head->data) == no)
        {
            iPos = iCnt;
        }
        Head = Head->next;
    }

    return iPos;
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

    printf("Enter the number5\n");
    scanf("%d", &no);

    InsertFirst(&First, no);

    printf("Enter the number6\n");
    scanf("%d", &no);

    InsertFirst(&First, no);

    printf("Enter the number7\n");
    scanf("%d", &no);

    InsertFirst(&First, no);

    Display(First);

    printf("\nEnter the number which we want to search\n");
    scanf("%d", &no);

    iRet = SearchLastOcc(First, no);

    printf("\nPosition at which element is found is : %d\n", iRet);

    return 0;
}
