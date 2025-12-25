///////////////////////////////////////////////////////////
//
//  Function Name : StrCpyToggle
//  Description : Copy characters of a string into another string by toggling the case
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 25/12/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyToggle(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src>='A' && *src<='Z')
        {
            *dest = *src+32;
        }
        else if(*src>='a' && *src<='z')
        {
            *dest = *src-32;
        }
        else
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest='\0';
}



int main()
{
    char arr[30]= "Marvellous Python 2";
    char brr[30];

    StrCpyToggle(arr,brr);

    printf("%s",brr);

    return 0;
}
