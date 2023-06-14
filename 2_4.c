#include <stdio.h>

void Display(int iNo, int iFrequency){
  for(iFrequency; iFrequency>0 ; iFrequency--){
    printf("%d%s",iNo, " ");
  }
}

int main(){
  int iValue;
  int iCount;

  printf("Enter Number: ");
  scanf("%d", &iValue);

  printf("Enter Frequency: ");
  scanf("%d", &iCount);

  Display(iValue, iCount);
  
  return 0;
}