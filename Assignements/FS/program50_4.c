#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define BUFFERSIZE 1024

int main()
{
    char Filename[50];
    int fd = 0;
    char Arr[BUFFERSIZE];
    int iRet = 0, iSize = 0;

    printf("Please enter the filename: ");
    scanf("%s", Filename);

    fd = open(Filename, O_RDONLY);

    while (1)
    {
        iRet = read(fd, Arr, sizeof(Arr));

        if (iRet == 0)
        {
            break;
        }
        iSize += iRet;
    }
    printf("\nThe size of the file is: %d", iSize);

    close(fd);
    return 0;
}
