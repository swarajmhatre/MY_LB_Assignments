#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
    int fd = 0;
    char str[20];
    printf("Enter the name of the file that you want to open: ");
    scanf("%s", str);
    fd = creat(str, 0777);
    if(fd == -1){
        printf("Unable to create the file");
        return -1;
    }
    else{
        printf("\nThe file is created successfully.");
    }
    close(fd);
    return 0;
}