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

int Maximum(PNODE Head)
{
    int iMax = 0;
    while (Head != NULL)
    {
       if((Head->data) > iMax){
        iMax = Head->data;
       }
        Head = Head->next;
    }
    return iMax;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    Display(First);


    iRet = Maximum(First);

    printf("\nThe Maximum of the numbers in the Linked List is: %d.", iRet);

    return 0;
}