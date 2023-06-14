#include <stdio.h>
#include <stdbool.h>

void DisplayTime(char cvalue)
{
    if ((cvalue == 'A' || cvalue == 'a'))
    {
        printf("Your exam at 7 AM");
    }
    else if ((cvalue == 'B' || cvalue == 'b'))
    {
        printf("Your exam at 8.30 AM");
    }
    else if ((cvalue == 'c' || cvalue == 'C'))
    {
        printf("Your exam at 9.20 AM");
    }
    else if ((cvalue == 'd' || cvalue == 'D'))
    {
        printf("Your exam at 10.30 AM");
    }
    else{
        printf("PLease enter a valid input.");
    }
    
    return;
}
int main()
{
    char ch = '\0';

    printf("Enter the character: ");
    scanf("%c", &ch);

   DisplayTime(ch);
    return 0;
}