///////////////////////////////////////////////////////////
//
//  Function Name : ChkChar
//  Description : Checks whether a character is present in a string or not
//  Input  : String, Character
//  Output : Boolean
//  Author : Sakshi Pradeep Bhapkar
//  Date : 19/12/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL ChkChar(char *str, char ch)
{
    BOOL flag = FALSE;

    while(*str != '\0')
    {

        if(*str == ch)
        {
            flag = TRUE;
        }

        str++;
    }

    return flag;
}

int main()
{
    char arr[20];
    char cValue;

    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter Character : \n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }
    

    return 0;
}
