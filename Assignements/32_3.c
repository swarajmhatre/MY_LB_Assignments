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
    printf("\nLinked List:");
    while (Head != NULL)
    {
        printf("|%d|->", Head->data);
        Head = Head->next;
    }
    printf("NULL");
}

int Product(int iNo)
{
    int iNum = 1;
    int iDigit = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit != 0)
        {
            iNum = iNum * iDigit;
        }
        iNo = iNo / 10;
    }
    return iNum;
}

void DisplayProduct(PNODE Head)
{
    int iNo = 0;
    printf("\nThe product of numbers in the Linked List are: ");

    while (Head != NULL)
    {
        iNo = Product(Head->data);
        printf("%d\t", iNo);
        Head = Head->next;
    }
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

    DisplayProduct(First);

    return 0;
}