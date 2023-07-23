#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdbool.h>

#define BUFFERSIZE 1024

void DisplayN(char F_Name[], int iLimit)
{
    int fd = 0, iCount = 0, iRet = 0;
    char Arr[BUFFERSIZE];
    fd = open(F_Name, O_RDONLY);
    bool bFlag = true;
    while (1)
    {
        iRet = read(fd, Arr, sizeof(Arr));
        if (iRet == 0)
        {
            break;
        }
        for (int i = 0; i < iRet; i++)
        {
            printf("%c", Arr[i]);
            iCount++;
            if(iCount>iLimit){
                bFlag= false;
                break;
            }
        }
    }
}

int main()
{
    char FileName[50];
    int iRet = 0, iNo =0;

    printf("Enter the name of the File: ");
    scanf("%s", FileName);
   

    printf("Enter the Limit: ");
    scanf("%d", &iNo);

    DisplayN(FileName, iNo);
    return 0;
}