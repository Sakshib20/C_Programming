///////////////////////////////////////////////////////////
//
//  Function Name : ChkAlpha
//  Description : Checks whether alphabet is small case or not
//  Input  : Character
//  Output : Boolean
//  Author : Sakshi Pradeep Bhapkar
//  Date : 03/12/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}


int main()
{
    char cValue ='\0';
    BOOL bRet = FALSE;

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    bRet=ChkAlpha(cValue);

    if(bRet==TRUE)
    {
        printf("It is Small Case character");
    }
    else
    {
        printf("It is not a Small Case character");
    }
    
    return 0;
}
