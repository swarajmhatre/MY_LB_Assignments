#include <stdio.h>
int Factorial(int iNo){
    int iResult = 1;
    int iCnt =0;
    for(int iCnt=1; iCnt <= iNo; iCnt++){
        iResult = iResult * iCnt  ;
    }
    return iResult;
}
int main(){
    int iValue =0; 
    int iRet =0;
    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("The factorial is: %d", iRet);
    return 0;
}