#include <stdio.h>
#include <stdbool.h>

void DisplayChars(char cvalue)
{
    if (cvalue <= 'Z' && cvalue >= 'A')
    {
        printf("\n");
        while (cvalue <= 'Z')
        {
            printf("%c\t", cvalue);
            cvalue++;
        }
    }
    else if (cvalue <= 'z' && cvalue >= 'a')
    {
        printf("\n");
        while (cvalue >= 'a')
        {
            printf("%c\t", cvalue);
            cvalue--;
        }
    }
    else
    {
            printf("\n%c\t", cvalue);
    }
}
int main()
{
    char ch = '\0';
    char cRet = '\0';
    printf("Enter the character: ");
    scanf("%c", &ch);

    DisplayChars(ch);
    return 0;
}