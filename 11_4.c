
#include<stdio.h>
#include<stdlib.h>


void RangeDigits(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    printf("Numbers between %d and %d are: ", iStart, iEnd);
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d \t ", Arr[iCnt]);
        }
    }
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0,iValue1 = 0, iValue2 = 0;

    printf("Enter number of elements: \n");
    scanf("%d",&iSize);

    printf("Enter the starting point: ");
    scanf("%d", &iValue1);

    printf("Enter the ending point: ");
    scanf("%d", &iValue2);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements: \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    RangeDigits(ptr, iSize, iValue1, iValue2);

    free(ptr);

    return 0;
}