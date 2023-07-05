#include <stdio.h>
#include <stdbool.h>

bool CheckAlphabet(char cvalue)
{
    if ((cvalue >= 'a' && cvalue <= 'z') || (cvalue <= 'Z' && cvalue >= 'A'))
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
        printf("\nThe character is an alphabet.");
    }
    else
    {
        printf("\n The character is not an alphabet.");
    }
    return 0;
}