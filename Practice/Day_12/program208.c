#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0, iRet=0;
    char FileName[20];
    char Data[50] = {'\0'};

    printf("Enter the name of file : ");
    scanf("%s",FileName);

    fd=open(FileName,O_RDWR);

    if(fd==-1)
    {
        printf("Enable to open \n");
        return -1;
    }

    iRet=read(fd,Data,7);
    printf("%d bytes gets successfully read\n",iRet);

    printf("Data from File : \n");
    write(1,Data,iRet);

    close(fd);

    return 0;
}