#include <stdio.h>
#include <stdbool.h>
bool ChkChar(char *str, char ch)
{
    bool bFlag = false;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the String: ");
    scanf("%[^'\n]s", Arr);

    printf("\nEnter the character to be searched: ");
    scanf(" %c", &cValue);

    bRet = ChkChar(Arr, cValue);

    if (bRet)
    {
        printf("\nThe character is present.");
    }
    else
    {
        printf("\nThe character is not present.");
    }
    return 0;
}