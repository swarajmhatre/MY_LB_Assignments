#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFERSIZE 1024

int CountCapital(char F_Name[])
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
            if ((Arr[i] <= 'Z') && (Arr[i] >= 'A'))
            {
                iCount++;
            }
        }
    }
    return iCount;
}

int main()
{
    char FileName[50];
    int iRet = 0;

    printf("Enter the name of the File: ");
    scanf("%s", FileName);

    iRet = CountCapital(FileName);

    printf("\nNumber of Capital letters in the file are: %d", iRet);
    return 0;
}