#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo){
  if((iNo % 5) == 0){
    return TRUE;
  }
  else{
    return FALSE;
  }
}

int main(){
  int iValue;
  BOOL bRet = FALSE;

  printf("Enter No: ");
  scanf("%d", &iValue);

  bRet = Check(iValue);

  if(bRet == TRUE){
    printf("Divisible BY 5");
  }
  else{
    printf("Not Divisible by 5");
  }
  return 0;
}