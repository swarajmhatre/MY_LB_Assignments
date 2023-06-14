#include <stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt =0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
          iCnt++;
        }
        str++;
    }
    return iCnt;
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

    iRet = CountChar(Arr, cValue);

        printf("\nThe character %c is present %d times in the string.", cValue, iRet);
    return 0;
}