#include <stdio.h>
#include <stdbool.h>
int CountDigits(int iNo)
{
    int iDigit =0;
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if ((iDigit<0) || (iDigit >9))
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue1);


    iRet = CountDigits(iValue1);

    printf("\nDigits are present %d times in the number %d.",  iRet, iValue1);

    return 0;
}