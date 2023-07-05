#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

int Addition(PNODE Head)
{
    int iRes = 0;
    while (Head != NULL)
    {
        if (((Head->data) % 2) == 0)
        {
            iRes = iRes + Head->data;
        }
        Head = Head->next;
    }
    return iRes;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    Display(First);

    iRet = Addition(First);

    printf("\nThe Sum of the even numbers is: %d.", iRet);

    return 0;
}