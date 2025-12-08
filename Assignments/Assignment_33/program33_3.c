///////////////////////////////////////////////////////////
//
//  Function Name : ChkAlpha
//  Description : Checks whether Character is a digit or not
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
10
BOOL ChkAlpha(char ch)
{
    if(ch>='0' && ch<='9')
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
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }
    
    return 0;
}
