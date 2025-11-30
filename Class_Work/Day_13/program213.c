#include<stdio.h>


int main()
{
    char Name[50]={'\0'};

    printf("Enter Your Name : ");
    scanf("%[^'\n']s",Name);

    printf("Hello : %s",Name);

    return 0;
}