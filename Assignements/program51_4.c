#include <stdio.h>
#include <stdlib.h>

void Pattern(int iNo)
{
    int *Arr = NULL;
    int iCnt = 0;
    Arr = (int *)malloc(11 * sizeof(int));

    while (iNo != 0)
    {
        Arr[iCnt] = iNo % 10;
        iNo = iNo / 10;
        iCnt++;
    }
    for (int i = 0; i < iCnt; i++)
    {
        for (int j = iCnt-1; j>=iCnt-i-1; j--)
        {
            printf("%d\t", Arr[j]);
        }
        printf("\n");
    }
}

int main()
{
    int iNo = 0;
    printf("Enter the number: \n");
    scanf("%d", &iNo);

    Pattern(iNo);
    return 0;
}