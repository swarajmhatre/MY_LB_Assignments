#include <stdio.h>
#include <stdbool.h>
bool CheckDigit(int iNo)
{
    int iCnt =0;
    bool bFlag = false;
    while ( iNo > 0 )
    {
        if((iNo % 10)== 0) {
            bFlag = true;
            break;
        }
        iNo = iNo / 10;
    }
    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = 0;
    printf("Enter Number: ");
    scanf("%d", &iValue);

    bRet = CheckDigit(iValue);
 if(bRet == true){

        printf("\nDigit 0 is present  in the number.");
 }
 else{
        printf("\nDigit 0 is not present  in the number.");
 }
    
    return 0;
}