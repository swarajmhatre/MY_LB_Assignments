#include <stdio.h>

typedef int BOOl;
#define TRUE 1
#define FALSE 0

BOOl ChkGreater(int iNo){
    if(iNo> 100){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

int main(){
    int iValue=0;

    BOOl bRet = FALSE;

    printf("Please Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if(bRet == TRUE){
        printf("Greater");
    }
    else{
        printf("Smaller");
    }
    return 0;
}