#include <stdio.h>

int main(){
    char Name[30];
    printf("PLease enter full Name: ");
    scanf("%[^\n]s", Name);
    printf("%s", Name);

    return 0;
}