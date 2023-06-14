#include <stdio.h>
int CountCapital(char *src)
{
    int iCnt = 0;
    while (*src != '\0')
    {
        if ((*src >= 'A') && (*src <= 'Z'))
        {
            iCnt++;
        }
        src++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string: ");
    scanf("%[^'\n]s", Arr);

    iRet = CountCapital(Arr);
    printf("\nThe count of capital letters in the string is: %d", iRet);

    return 0;
}