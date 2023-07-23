#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFERSIZE 1024

int CountChar(char F_Name[], char ch)
{
    int fd = 0, iCount = 0, iRet = 0;
    char Arr[BUFFERSIZE];
    fd = open(F_Name, O_RDONLY);

    while (1)
    {
        iRet = read(fd, Arr, sizeof(Arr));
        if (iRet == 0)
        {
            break;
        }
        for (int i = 0; i < iRet; i++)
        {
            if (Arr[i] == ch)
            {
                iCount++;
            }
        }
    }
    return iCount;
}

int main()
{
    char FileName[50], ch = ' ';
    int iRet = 0;

    printf("Enter the name of the File: ");
    scanf(" %[^'\n']s", FileName);
   
   getchar();
    printf("Enter the Character to search: ");
    scanf("%c", &ch);

    iRet = CountChar(FileName, ch);

    printf("\nFrequncey of letter %c in the file are: %d",ch, iRet);
    return 0;
}