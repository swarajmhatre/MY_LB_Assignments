#include <stdio.h>
#include <stdbool.h>

bool CheckAlphabet(char cvalue)
{
    if ((cvalue <= '9' && cvalue >= '0'))
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
        printf("\nThe character is a Digit.");
    }
    else
    {
        printf("\n The character is not a Digit.");
    }
    return 0;
}