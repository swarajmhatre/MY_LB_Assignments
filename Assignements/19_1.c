#include <stdio.h>

void Display(int iRow,int  iCol){
    //Logic
    int i=0, j=0;
    if(iRow != iCol){
        printf("\n Invalid Input");
        return;
    }
   for( i =1; i<= iRow; i++){
   
    for(j=1;j<=iCol; j++){
      if(i<j){
        printf(" \t");
      }
      else{
        printf("%c\t", '*');
      }
    }
    printf("\n");
   }
}

int main(){
    int iValue1 =0, iValue2=0;

    printf("Enter Number of rows \n");
    scanf("%d", &iValue1);
    printf("Enter Number of Columns \n");
    scanf("%d", &iValue2);
    Display(iValue1, iValue2);
    return 0;
}