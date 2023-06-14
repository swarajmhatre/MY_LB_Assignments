
#include <stdio.h>

void Display(int iNo){
    //Logic
    int iCnt =0;
    for(iCnt =1; iCnt<= iNo; iCnt++){
        printf("%d\t", iCnt*2);
    }
}

int main(){
    int iFrequency =0;

    printf("Enter the Frequency of Symbol: \n");
    scanf("%d", &iFrequency);
    Display(iFrequency);
    return 0;
}