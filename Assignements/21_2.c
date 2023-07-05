#include <stdio.h>
#include <stdbool.h>

char CharToggle(char cvalue)
{
    if (cvalue <= 'Z' && cvalue >= 'A')
    {
        return cvalue + 32;
    }
    else if (cvalue <= 'z' && cvalue >= 'a')
    {
        return cvalue - 32;
    }
    else
    {
        /* code */
        return cvalue;
    }
}
int main()
{
    char ch = '\0';
    char cRet = '\0';
    printf("Enter the character: ");
    scanf("%c", &ch);

    cRet = CharToggle(ch);
    printf("%c", cRet);
    return 0;
}