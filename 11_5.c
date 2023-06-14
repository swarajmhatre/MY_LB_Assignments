

#include<stdio.h>
#include<stdlib.h>


int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iRes = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
           iRes = iRes * Arr[iCnt];
        }
    }
    return iRes;
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0, iRet = 0;

    printf("Enter number of elements: \n");
    scanf("%d",&iSize);

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

    iRet = Product(ptr, iSize);
    printf("The product is: %d",iRet);

    free(ptr);

    return 0;
}