#include <stdio.h>

void MultipleDisplay(int iNo){
    int iCnt = 0;
    int iRes =1;
    for(iCnt =1; iCnt <= 5; iCnt ++){
            iRes = iNo * iCnt;
            printf("%d\t",iRes);
    
    }
}

int main(){
    int iValue =0;
    printf("Enter Number: ");
    scanf("%d", &iValue);
    MultipleDisplay(iValue);
    return 0;
}