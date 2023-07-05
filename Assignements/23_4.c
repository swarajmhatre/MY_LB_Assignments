#include <stdio.h>

void DisplayDigits(char *str){
    while (*str!= '\0')
    {
        if((*str >= '0')&&(*str<='9')){
            printf("%c", *str);
        }
        str++;
    }
    
}

int main(){
    char Arr[20];
    printf("Enter the string: ");
    scanf("%[^'\n]s", Arr);

    DisplayDigits(Arr);
    return 0;
}