
#include <stdio.h>
#include <stdlib.h>

float CalculateBill(float fNo)
{
    if (fNo < 500.0)
    {
        return fNo;
    }
    else if (fNo > 500.0)
    {
        fNo = fNo * 0.80;
    }
    else if (fNo > 1500.0)
    {
        fNo = fNo * 0.85;
    }
}

int main()
{
    float fValue;
    float fRet;
    printf("\nEnter Amount:");
    scanf("%d", &fValue);
    fRet = CalculateBill(fValue);
printf("/n The bill is %f", fRet);
    return 0;
}