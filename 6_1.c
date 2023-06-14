#include <stdio.h>
int Number(int iNo){
if(iNo <50){
    printf("small");
}
else if((iNo >=50) &&(iNo<100)){
    printf("medium");
}
else{
    printf("large");
}
}
int main(){
    int iValue =0; 
    int iRet =0;
    printf("Enter Number: ");
    scanf("%d", &iValue);
    Number(iValue);

    return 0;
}