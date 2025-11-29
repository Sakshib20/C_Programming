#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char FileName[20];

    printf("Enter the File Name that you want to Open : ");
    scanf("%s",FileName);

    fd=open(FileName,O_RDWR);

    if(fd==-1)
    {
        printf("Unable to Open file\n");
    }
    else
    {
        printf("File successfully open with fd : %d\n",fd);
    }


    return 0;
}