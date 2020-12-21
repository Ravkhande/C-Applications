

int main()
{
    PNODE First = NULL; // PT chya sirane lakshat thevalela mulacha address
    int no = 0, iRet = 0, iPos = 0;

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

    printf("\nNumber of nodes in Linked List are: %d\n", iRet);

    printf("Enter the number1:\n");
    scanf("%d", &no);

    InsertLast(&First, no);

    printf("Enter the number2:\n");
    scanf("%d", &no);

    InsertLast(&First, no);

    Display(First);

    iRet = Count(First);

    printf("\nNumber of nodes in Linked List are: %d\n", iRet);

    DeleteFirst(&First);

    Display(First);

    iRet = Count(First);

    printf("\nNumber of nodes in Linked List are: %d\n", iRet);

    DeleteLast(&First);

    Display(First);

    iRet = Count(First);

    printf("\nNumber of nodes in Linked List are: %d\n", iRet);

    printf("Enter the number:\n");
    scanf("%d", &no);

    printf("Enter the position:\n");
    scanf("%d", &iPos);

    InsertAtPos(&First, no, iPos);

    Display(First);

    iRet = Count(First);

    printf("\nNumber of nodes in Linked List are: %d\n", iRet);

    return 0;
}
