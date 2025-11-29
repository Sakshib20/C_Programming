#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0, iRet=0;
    char FileName[20];
    char Data[50]="India is my Country";

    printf("Enter the name of file that you want to create : ");
    scanf("%s",FileName);

    fd=open(FileName,O_RDWR);

    if(fd==-1)
    {
        printf("Enable to open \n");
        return -1;
    }

    iRet=read(fd,Data,5);
    printf("%d bytes gets successfully read",iRet);

    close(fd);

    return 0;
}