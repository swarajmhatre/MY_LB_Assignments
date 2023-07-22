#include <stdio.h>

void Accept(int Arr[][20], int iRow, int iCol)
{
    printf("Enter elements in the matrix: \n");

    for (int i = 0; i < iRow; i++)
    {
        for (int j = 0; j < iCol; j++)
        {
            printf("Row_%d Column_%d:\t", i + 1, j + 1);
            scanf("%d", &Arr[i][j]);
        }
    }
}

void Display(int Arr[][20], int iRow, int iCol)
{
    printf("The elements in the matrix are: \n");

    for (int i = 0; i < iRow; i++)
    {
        for (int j = 0; j < iCol; j++)
        {
            printf("%d\t", Arr[i][j]);
        }
        printf("\n");
    }
}

int Frequency(int Arr[][20], int iRow, int iCol, int iNo)
{
    int iFreq = 0;

    for (int i = 0; i < iRow; i++)
    {
        for (int j = 0; j < iCol; j++)
        {
            if (Arr[i][j] == iNo)
            {
                iFreq++;
            }
        }
    }
    return iFreq;
}

int main()
{
    int iRow, iCol;
    int Arr[20][20];
    int iRet = 0;
    int iNo =0;

    printf("Enter the dimensions of the matrix: ");
    scanf("%d", &iRow);
    scanf("%d", &iCol);

    if (iRow != iCol)
    {
        printf("Invalid Input! The number of rows and columns must be the same;");
        return 0;
    }

    printf("\n");
    Accept(Arr, iRow, iCol);
    Display(Arr, iRow, iCol);

    printf("\nEnter the number to search the frequency: ");
    scanf("%d", &iNo);

    iRet = Frequency(Arr, iRow, iCol, iNo);

    printf("\nThe Summation of Diagonal elements is: %d", iRet);
    return 0;
}
