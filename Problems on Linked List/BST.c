#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

typedef struct Node
{
    int data;
    struct Node *lchild;
    struct Node *rchild;
} NODE, *PNODE, **PPNODE;

void Insert(PPNODE root, int value)
{
    PNODE newn = NULL;
    PNODE temp = *root;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if (*root == NULL) // if Tree does not contain any node then yenara node is our first node
    {
        *root = newn;
    }
    else
    {             //for(; ;)
        while (1) // infinite or Unconditional loop
        {
            if (temp->data == value)
            {
                printf("Unable to insert the element because duplicate elements are not allowed\n");
                free(newn);
                break;
            }
            if (value < temp->data)
            {
                if (temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
            }
            else if (value > temp->data)
            {
                if (temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
        } // end of else

    } // end of while
} //end of Insert

BOOL Search(PNODE root, int value)
{
    while (root != NULL)
    {
        if (root->data == value)
        {
            break;
        }
        if (value < root->data)
        {
            root = root->lchild;
        }
        else
        {
            root = root->rchild;
        }
    }

    if (root == NULL)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

//  root=100

void Inorder(PNODE root) // LDR
{
    if (root != NULL)
    {
        Inorder(root->lchild);
        printf("%d\t", root->data);
        Inorder(root->rchild);
    }
}

void Preorder(PNODE root) //DLR
{
    if (root != NULL)
    {
        printf("%d\t", root->data);
        Preorder(root->lchild);
        Preorder(root->rchild);
    }
}

void Postorder(PNODE root) //LRD
{
    if (root != NULL)
    {
        Postorder(root->lchild);
        Postorder(root->rchild);
        printf("%d\t", root->data);
    }
}

int main()
{
    PNODE First = NULL;
    int choice = 1, no = 0;
    BOOL bRet = FALSE;

    while (choice != 0)
    {
        printf("\nApplication to Demonstrate Binary search Tree\n");
        printf("_________________________________________________\n");
        printf("1: Insert Node in Tree\n");
        printf("2: Srach the element from tree\n");
        printf("3: Display the element using Inorder Traversal\n");
        printf("4: Display the element using Preorder Traversal\n");
        printf("5: Display the element using Postorder Traversal\n");
        printf("0: Exit the Application\n");
        printf("______________________________________________________\n");
        printf("Enter your choice:\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number to insert:\n");
            scanf("%d", &no);

            Insert(&First, no);
            break;

        case 2:
            printf("Enter the number to be search:\n");
            scanf("%d", &no);

            bRet = Search(First, no);
            if (bRet == TRUE)
            {
                printf("Element is present in BST\n");
            }
            else
            {
                printf("Element is not present in BST\n");
            }
            break;

        case 3:
            Inorder(First);
            break;

        case 4:
            Preorder(First);
            break;

        case 5:
            Postorder(First);
            break;

        case 0:
            printf("Thank you for using the Application\n");
            break;

        default:
            printf("Wrong choice\n");
            break;
        }
    }

    return 0;
}