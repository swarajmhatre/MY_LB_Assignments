#include <stdio.h>
int CountDiff(char *src)
{
    int iCapCnt = 0;
    int iSmallCnt = 0;
    while (*src != '\0')
    {
        if ((*src >= 'A') && (*src <= 'Z'))
        {
            iCapCnt++;
        }
        if ((*src >= 'a') && (*src <= 'z'))
        {
            iSmallCnt++;
        }
        src++;
    }
    return (iSmallCnt-iCapCnt);
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string: ");
    scanf("%[^'\n]s", Arr);

    iRet = CountDiff(Arr);
    printf("\nThe difference between the count of small letters and capital letters in the string is: %d", iRet);

    return 0;
}