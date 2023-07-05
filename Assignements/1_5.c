#include <stdio.h>
void Accept(int iNo){
  int iCnt =0;

  for(iCnt; iCnt< iNo;iCnt++){
    printf("*");
  }
}

int main(){
  int iValue =0;
  printf("Enter the integer: ");
  scanf("%d", &iValue);

  Accept(iValue);

  return 0;
}