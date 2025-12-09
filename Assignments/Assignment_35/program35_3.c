///////////////////////////////////////////////////////////
//
//  Function Name : Difference
//  Description : Returns difference between frequency of small characters and capital characters
//  Input  : Character
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 09/12/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int Difference(char *str)
{
    int iCapCnt=0, iSmCnt=0;

    while(*str != '\0')
    {
        if(*str>='a' && *str<='z')
        {
            iCapCnt++;
        }
        else if(*str>='A' && *str<='Z')
        {
            iSmCnt++;
        }
        *str++;
    }

    return iCapCnt-iSmCnt;
}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet=Difference(arr);
    printf("%d",iRet);

    return 0;
}