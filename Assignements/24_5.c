#include <stdio.h>
#include <stdbool.h>
void StrRevX(char *str)
{
    char *start=NULL;
    char *end=NULL;
    char temp = '\0';
    start = str;
    end =str;

    while (*end != '\0')
    {
        end++;
    }
    end--;
    while (start < end)
    {
       temp = *end;
       *end = *start;
       *start = temp;
       start++;
       end--;
    }
    
}

int main()
{
    char Arr[20];

    printf("Enter the String: ");
    scanf("%[^'\n]s", Arr);
    StrRevX(Arr);

    printf("\nThe reversed string is : %s" ,Arr);
    return 0;
}