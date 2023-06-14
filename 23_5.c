#include <stdio.h>

int CountSpaces(char *str){
    int iCnt =0;
    while (*str!= '\0')
    {
        if((*str == ' ')){
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main(){
    char Arr[20];
    int iRet = 0;
    printf("Enter the string: ");
    scanf("%[^'\n]s", Arr);

    iRet = CountSpaces(Arr);
    
    printf("The number of WHite SPaces in the input strin is: %d", iRet);
    return 0;
}