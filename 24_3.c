#include <stdio.h>
#include <stdbool.h>
#define ERR_NOTFOUND -1
int FirstChar(char *str, char ch)
{
    int iPos = ERR_NOTFOUND;
int iCnt =1;
    while (*str != '\0')
    {
        if (*str == ch)
        {
            iPos = iCnt;
            break;
        }
        str++;
        iCnt++;
    }
    return iPos;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String: ");
    scanf("%[^'\n]s", Arr);

    printf("\nEnter the character to be searched: ");
    scanf(" %c", &cValue);

    iRet = FirstChar(Arr, cValue);

    if (iRet == ERR_NOTFOUND)
    {
        printf("\nThere is no such character");
    }
    else
    {
        printf("\nThe character is present at the index %d", iRet);
    }
    return 0;
}