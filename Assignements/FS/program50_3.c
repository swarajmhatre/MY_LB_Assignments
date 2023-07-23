#include<stdio.h>
#include<fcntl.h> //File control
#include <unistd.h>
#include<stdlib.h>
#include<string.h>

#define BUFFERSIZE 1024


int main(){
    char Filename[50];
    int fdRead =0;
    char Arr[BUFFERSIZE];
    int iRet = 0;

    printf("Enter the filename that you want to open: ");
    scanf("%s", Filename);

    fdRead = open(Filename,O_RDONLY);

    while (1)
    {
        iRet = read(fdRead, Arr, sizeof(Arr));
        if(iRet==0){
            break;
        }
        write(1,Arr,iRet);
    }

    close(fdRead);
    


    return 0;


}