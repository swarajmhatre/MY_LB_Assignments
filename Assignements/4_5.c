#include <stdio.h>
float Percentage(float iNo1, float iNo2 ){
    float fResult;
    fResult = (iNo2/iNo1)*100;
    if(iNo2==0){
        return 0.0;
    }
    else if(iNo1 ==0){
        return -1;
    }
    else{
        return fResult;
    }
}
int main(){
    int iValue1=0, iValue2 =0;
    float fRet =0.0;
    printf("Please enter the Total marks: ");
    scanf("%d", &iValue1);
    printf("Please enter the Obtained marks: ");
    scanf("%d", &iValue2);
    fRet = Percentage(iValue1, iValue2);
    printf("The Percentage is %f", fRet);
    return 0;
}