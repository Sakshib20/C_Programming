///////////////////////////////////////////////////////////
//
//  Function Name : ChkSpecial
//  Description : Checks whether a character is a special symbol or not
//  Input  : Character
//  Output : Boolean
//  Author : Sakshi Pradeep Bhapkar
//  Date : 07/12/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    if(ch=='!' || ch=='@'|| ch=='#' || ch=='$'|| ch=='%' || ch=='^' || ch=='&' || ch=='*')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue='\0';
    bool bRet = false;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet=ChkSpecial(cValue);

    if(bRet==true)
    {
        printf("It is a special character");
    }
    else
    {
        printf("It is not a special character");
    }

    return 0;
}