#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void Accept(int **Arr, int iRow, int iCol)
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

void Display(int **Arr, int iRow, int iCol)
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

bool CheckSparse(int **Arr, int iRow, int iCol)
{
    int iZero = 0, iNonZero = 0;

    for (int i = 0; i < iRow; i++)
    {
        for (int j = 0; j < iCol; j++)
        {
            if (Arr[i][j] == 0)
            {
                iZero++;
            }
            else
            {
                iNonZero++;
            }
        }
    }
    if (iZero > iNonZero)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iRow, iCol;
    int **Arr;
    bool bRet = false;
    printf("Enter the dimensions of the matrix: ");
    scanf("%d", &iRow);
    scanf("%d", &iCol);

    if (iRow != iCol)
    {
        printf("Invalid Input! The number of rows and columns must be the same;");
        return 0;
    }

    Arr = (int **)malloc(iRow * sizeof(int *));

    for (int i = 0; i < iRow; i++)
    {
        Arr[i] = (int *)malloc(iCol * sizeof(int));
    }

    printf("\n");

    Accept(Arr, iRow, iCol);
    Display(Arr, iRow, iCol);

    bRet = CheckSparse(Arr, iRow, iCol);
    Display(Arr, iRow, iCol);

    if (bRet)
    {
        printf("Sparse Matrix");
    }
    else
    {
        printf("Not an Sparse Matrix");
    }

    return 0;
}
