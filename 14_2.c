
#include <stdio.h>

void Display(int iNo){
    //Logic
    int iCnt =0;
    for(iCnt =iNo; iCnt>= 1; iCnt--){
        printf("%d\t#\t", iCnt);
    }
}

int main(){
    int iFrequency =0;

    printf("Enter the Frequency of Symbol: \n");
    scanf("%d", &iFrequency);
    Display(iFrequency);
    return 0;
}