#include <stdio.h>

void TableRev(int iNo){
    int iCnt = 0;
    int iRes =1;
    if(iNo<0){
        iNo = -iNo;
    }
    for(iCnt =10; iCnt >= 1; iCnt --){
            iRes = iNo * iCnt;
            printf("%d\t",iRes);
    }
}

int main(){
    int iValue =0;
    printf("Enter Number: ");
    scanf("%d", &iValue);
    TableRev(iValue);
    return 0;
}