
#include<stdio.h>
#include<stdlib.h>

int DisplaySumofDigits(int Arr[], int iLength)
{
    int iCnt = 0;
    int iDigit = 0;
    int iNo = 0, iSum = 0;

    printf("Addition of digits of numbers in array: \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        printf("%d \t",iSum);
        iSum =0;
    }
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

    DisplaySumofDigits(ptr, iSize);

    free(ptr);

    return 0;
}