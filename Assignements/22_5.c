#include <stdio.h>
void DisplayRev(char *src)
{
    int iCnt = 0;
    while (*src != '\0')
    {
        src++;
        iCnt++;
    }
    src--;
    iCnt--;

    while (iCnt >= 0)
    {
        printf("%c", *src);
        iCnt--;
        src--;
    }
}
int main()
{
    char Arr[20];

    printf("Enter the string: ");
    scanf("%[^'\n]s", Arr);
    DisplayRev(Arr);
    return 0;
}