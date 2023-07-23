#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
    char Filename[50];
    int fd = 0, iRet = 0;
    char Arr[50];

    printf("Enter the file name: ");
    scanf("%s", Filename);

    printf("\nEnter the string you want to append: ");
    scanf(" %[^'\n']s", Arr);

    fd = open(Filename, O_RDWR | O_APPEND);

    if (fd == -1)
    {
        printf("\nUnable to read the file.");
        return -1;
    }

    iRet = write(fd, Arr, strlen(Arr));

    printf("%d bytes get successfully Written in file", iRet);
    close(fd);

    return 0;
}