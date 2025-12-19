///////////////////////////////////////////////////////////
//
//  Function Name : strtogglex
//  Description : Converts the case of string
//  Input  : Character
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 19/12/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = (*str)-32;
        }
        else
        {
            *str = (*str)+32;
        }
        str++;
    }
    
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    strtogglex(arr);

    printf("Modified string is : %s",arr);

    return 0;
}
