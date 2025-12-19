///////////////////////////////////////////////////////////
//
//  Function Name : struprx
//  Description : Converts the string to Upper case
//  Input  : Character
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 19/12/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = (*str)-32;
        }
        else
        {
            *str = *str;
        }
        str++;
    }
    
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    struprx(arr);

    printf("Modified string is : %s",arr);

    return 0;
}
