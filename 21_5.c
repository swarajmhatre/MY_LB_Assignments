#include <stdio.h>

void DisplayASCII(char ch)
{
    printf("Your Entered character is: %c\n", ch);
    printf("Decimal: %d\n", ch);
    printf("Hexadecimal: %x\n", ch);
    printf("Octal: %o\n", ch);
}
int main()
{
    char cValue = '\0';
    printf("Enter the character: ");
    scanf("%c", &cValue);
    DisplayASCII(cValue);
    return 0;
}