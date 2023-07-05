
#include <stdio.h>
#include <stdlib.h>

int CalculateFee(int iNo)
{
    if (iNo <=100)
    {
        return (25*iNo);
    }
    else if (iNo > 100)
    {
        return (2500 + (15*(iNo-100)));
    }
    else
    {
        return -1;
    }
}

int main()
{
    int ivalue;
    int iRet;
    printf("\nEnter Amount:");
    scanf("%d", &ivalue);
    iRet = CalculateFee(ivalue);
    if (iRet == -1)
    {
        printf("PLease enter the right input");
    }
    else
    {

        printf("\nThe Fee is %d", iRet);
    }
    return 0;
}