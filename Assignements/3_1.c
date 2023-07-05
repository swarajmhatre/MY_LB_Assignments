#include <stdio.h>

int Multifact(int iNo){
    int iResult=1;
    int iCnt =0;
    for(iCnt = 1; iCnt <= iNo/2; iCnt++){
        if(iNo%iCnt ==0){
            iResult = iResult * iCnt;
        }
    }
    return iResult;
}

int main(){
    int iValue =0;
    int iRet = 0;

    printf("Enter Number");
    scanf("%d", &iValue);
    iRet = Multifact(iValue);
    printf("%d", iRet);

    return 0;

}