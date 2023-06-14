#include <stdio.h>
#include <stdbool.h>
int CheckDigit(int iNo)
{
    int iCnt =0;
    while ( iNo > 0 )
    {
        if((iNo % 10)< 6) {
            iCnt++;
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

    iRet = CheckDigit(iValue);
 
        printf("\nDigit which are less than 6 are present %d times in the number.", iRet);
    
    return 0;
}