#include <stdio.h>
#include <stdbool.h>

bool CheckSymbols(char cvalue)
{
    if ((cvalue <= '/' && cvalue >= '!') || (cvalue <= '@' && cvalue >= ':')|| (cvalue <= '`' && cvalue >= '['))
    {
        return true;
    }
    return false;
}
int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the character: ");
    scanf("%c", &ch);

    bRet = CheckSymbols(ch);
    if (bRet == true)
    {
        printf("\nThe character is a Special Character.");
    }
    else
    {
        printf("\n The character is not a Special Character.");
    }
    return 0;
}