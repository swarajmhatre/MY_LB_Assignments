#include <stdio.h>

void StrlTogglex(char *str){
    while (*str!= '\0')
    {
        if(*str >= 'a' && *str <='z'){
            *str = *str - 32;
        }
        else if(*str >= 'A' && *str <='Z'){
            *str = *str + 32;
        }
        str++;
    }
    
}

int main(){
    char Arr[20];
    printf("Enter the string: ");
    scanf("%[^'\n]s", Arr);

    StrlTogglex(Arr);

    printf("String after editing is %s", Arr);
    return 0;
}