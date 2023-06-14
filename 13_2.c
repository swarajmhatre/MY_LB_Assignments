
#include <stdio.h>
#include <stdlib.h>

float CaculateTax(int iNo)
{
    if (iNo < 500000)
    {
        return 0;
    }
    else if ((iNo >= 500000) && (1000000 > iNo))
    {
        iNo = 0 + (float)(0.10 * (iNo - 500000) );
        return iNo;
    }
    else if ((2000000.0 > iNo)&&(iNo >= 1000000.0))
    {
        iNo = 50000.0 + (float)((iNo - 1000000) * 0.20);
        return iNo;
    }
    else if (iNo >= 2000000.0)
    {
        iNo = 250000.0 + (float)((iNo - 2000000) * 0.30);
        return iNo;
    }
    else{
        return -1;
    }
    
}

int main()
{
    int iValue;
    float fRet;
    printf("\nEnter Amount:");
    scanf("%d", &iValue);
    fRet = CaculateTax(iValue);
    printf("\n The tax is %f", fRet);
    return 0;
}