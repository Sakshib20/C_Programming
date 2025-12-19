///////////////////////////////////////////////////////////
//
//  Function Name : CountWhite
//  Description : Counts number of whitespaces in a string
//  Input  : Character
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 19/12/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }

        str++;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("Number os whitespaces are : %d",iRet);

    return 0;
}
