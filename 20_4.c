#include <stdio.h>
#include <stdbool.h>

bool CheckAlphabet(char cvalue)
{
    if ((cvalue <= 'z' && cvalue >= 'z'))
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

    bRet = CheckAlphabet(ch);
    if (bRet == true)
    {
        printf("\nThe character is a Small Case Character");
    }
    else
    {
        printf("\n The character is not a Small Case Character");
    }
    return 0;
}