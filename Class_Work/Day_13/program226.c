#include<stdio.h>

int CountOccurence(char str[], char ch)
{
    int iCount = 0;

    while(*str!='\0')
    {
        if(*str==ch)
        {
        iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[50]={'\0'};
    int iRet = 0;
    char cValue='\0';

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    fflush(stdin);              //not apllicable on all OS

    printf("Enter the character : ");
    scanf("%c",&cValue);

    iRet=CountOccurence(Arr,cValue);
    printf("Number of occurences  are : %d",iRet);
    
    return 0;
}