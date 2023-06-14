#include <stdio.h>

void Display(){
  int i =0;
  int maxCnt =5;

  for( i; i< maxCnt; i++){
    printf("%d", maxCnt-i);
  }
}

int main(){
  Display();

  return 0;
}