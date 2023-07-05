#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int No)
{

    PNODE newn;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL)
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
    while (Head != NULL)
    {
        printf("|%d|->", Head->data);
        Head = Head->next;
    }
    printf("NULL");
}

int SearchLastOcc(PNODE Head, int No)
{
    int iPos = -1;
    int iCnt = 1;
    while (Head != NULL)
    {
        if (Head->data == No)
        {
            iPos = iCnt;
        }
        Head = Head->next;
        iCnt++;
    }
    return iPos;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    int iSearch = 0;
    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    Display(First);

    printf("\n\nEnter the number you want to search for in the above List: ");
    scanf("%d", &iSearch);

    iRet = SearchLastOcc(First, iSearch);

    if (iRet == -1)
    {
        printf("\nThe does not exist");
    }
    else
    {
        printf("\nThe Last occurance of the number %d is at the position %d.",iSearch, iRet);
    }
    return 0;
}