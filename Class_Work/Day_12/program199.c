#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char FileName[20];

    printf("Enter the File Name that you want to create : ");
    scanf("%s",FileName);

    fd = creat(FileName,0777);

    if(fd==-1)
    {
        printf("Unable to create file ");
    }
    else
    {
        printf("File successfully created with fd : %d",fd);
    }

    return 0;
}