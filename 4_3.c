#include <stdio.h>

typedef int BOOl;
#define TRUE 1
#define FALSE 0

BOOl ChkEqual(int iNo1, int iNo2){
    if(iNo1 == iNo2){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

int main(){
    int iValue1=0;
    int iValue2=0;

    BOOl bRet = FALSE;

    printf("Please Enter the two numbers ");
    scanf("%d%d", &iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == TRUE){
        printf("Equal");
    }
    else{
        printf("Not Equal");
    }
    return 0;
}