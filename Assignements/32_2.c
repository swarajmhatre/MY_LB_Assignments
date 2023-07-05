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

int ReverseNum(int iNo)
{
    int iNum = 0;
    int iDigit = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNum = (iNum * 10) + iDigit;
        iNo = iNo / 10;
    }
    return iNum;
}

bool CheckPalindrome(int iNo)
{
    
    bool bFlag = false;

    if (iNo == ReverseNum(iNo))
    {
        bFlag = true;
    }
    
    
   return bFlag;
}

void DisplayPalindrome(PNODE Head)
{
    printf("\nThe numbers in the Linked List which are palindrome are: ");
    while (Head != NULL)
    {
        if (CheckPalindrome(Head->data))
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
    InsertFirst(&First, 414);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    Display(First);

    DisplayPalindrome(First);

    return 0;
}