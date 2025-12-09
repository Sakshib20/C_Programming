///////////////////////////////////////////////////////////
//
//  Function Name : CountCapital
//  Description : Count number of capital characters in a string
//  Input  : Character
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 07/12/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt=0;

    while(*str != '\0')
    {
        if(*str>='A' && *str<='Z')
        {
            iCnt++;
        }
        *str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet=CountCapital(arr);
    printf("%d",iRet);

    return 0;
}