///////////////////////////////////////////////////////////
//
//  Function Name : Reverse
//  Description : Displays the string in reverse order
//  Input  : Character
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 09/12/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>


void Reverse(char *str)
{
    int iCnt=0, iCount=0;
    while(*str != '\0')
    {
        *str++;
        iCnt++;
    }
    for(iCount=1;iCount<=iCnt;iCount++)
    {
        *str--;
        printf("%c",*str);
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);
    
    Reverse(arr);
    
    return 0;
}