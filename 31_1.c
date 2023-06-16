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

bool CheckPerfect(int iNo)
{
    int iCnt;
    int iSum = 0;
    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if (iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void DisplayPerfect(PNODE Head)
{
    printf("\nThe perfect numbers in the Linked List are: ");
    while (Head != NULL)
    {
        if (CheckPerfect(Head->data))
        {
            printf("%d\t", Head->data);
        }
        Head = Head->next;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 41);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    Display(First);

    DisplayPerfect(First);

    return 0;
}