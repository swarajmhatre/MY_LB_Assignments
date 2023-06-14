#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Search(int Arr[], int iLength)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (11 == Arr[iCnt])
        {
            break;
        }
    }
    if(iCnt == iLength){
        return false;
    }
    else{
        return true;
    }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    bool bRet = 0;

    printf("Enter Number of Elements: \n");
    scanf("%d", &iSize);
    ptr = (int *)malloc(iSize * sizeof(int));

    printf("\nEnter the elements: ");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("\nEntered elements are: ");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\n%d", ptr[iCnt]);
    }
    bRet = Search(ptr, iSize);
    if (bRet == true)
    {

        printf("\nThe number 11 is present in the array.");
    }
    else
    {
        printf("\nThe number 11 is not present in the array.");
    }
    free(ptr);
    return 0;
}