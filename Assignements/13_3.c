
#include <stdio.h>
#include <stdlib.h>

int CalculateFee(int iNo)
{
    if (iNo == 1)
    {
        return 8900;
    }
    else if (iNo == 2)
    {
        return 12790;
    }
    else if (iNo == 3)
    {
        return 21000;
    }
    else if (iNo == 4)
    {
        return 23450;
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