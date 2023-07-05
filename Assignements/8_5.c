#include <stdio.h>
#include <stdbool.h>
int Difference(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    int ioddSum =0, ievenSum =0;
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if ((iDigit % 2) != 0)
        {
            ioddSum+= iDigit;
        }
        else{
            ievenSum += iDigit;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = Difference(iValue);
    printf("\nThe Difference is : %d", iRet);

    return 0;
}