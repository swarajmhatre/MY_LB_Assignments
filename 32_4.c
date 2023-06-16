#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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

int Smallest(int iNo)
{
    int iMin = INT_MAX;
    int iDigit = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit< iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
    }
    return iMin;
}

void DisplaySmall(PNODE Head)
{
    int iNo = 0;
    printf("\nThe Smallest of digits in the Linked List numbers are: ");

    while (Head != NULL)
    {
        iNo = Smallest(Head->data);
        printf("%d\t", iNo);
        Head = Head->next;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    InsertFirst(&First, 415);
    InsertFirst(&First, 532);
    InsertFirst(&First, 250);
    InsertFirst(&First, 11);

    Display(First);

    DisplaySmall(First);

    return 0;
}