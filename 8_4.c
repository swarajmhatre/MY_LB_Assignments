#include <stdio.h>
#include <stdbool.h>
int CountDigits(int iNo)
{
    int iDigit =0;
    int iCnt = 0;
    int iMulti = 1;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iMulti = iMulti*iDigit;
        iNo = iNo / 10;
    }
    return iMulti;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue1);


    iRet = CountDigits(iValue1);

    printf("\nThe multiplication of digits is: %d",  iRet);

    return 0;
}