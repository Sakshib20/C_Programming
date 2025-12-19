///////////////////////////////////////////////////////////
//
//  Function Name : LastChar
//  Description : Returns the index of first occurence of a character
//  Input  : String, Character
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 19/12/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iIndex = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iIndex = iCnt;
        }
        
        iCnt++;

        str++;
    }

    return iIndex;

}

int main()
{
    char arr[20];
    char cValue;

    int iRet=0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    printf("Enter Character : \n");
    scanf(" %c",&cValue);

    iRet=LastChar(arr, cValue);

    printf("Character location is : %d",iRet);

    return 0;
}
