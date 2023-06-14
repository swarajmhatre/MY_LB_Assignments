#include <stdio.h>

void Display(int iRow, int iCol)
{
    // Logic
    int i = 0, j = 0;
    char ch1 = 'A';
    char ch2 = 'a';
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1, ch1 = 'A',ch2 = 'a'; j <= iCol; j++, ch1++, ch2++)
        {
            if (i % 2 == 0)
            {

                printf("%c\t", ch2);
            }
            else
            {
                printf("%c\t", ch1);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of rows \n");
    scanf("%d", &iValue1);
    printf("Enter Number of Columns \n");
    scanf("%d", &iValue2);
    Display(iValue1, iValue2);
    return 0;
}