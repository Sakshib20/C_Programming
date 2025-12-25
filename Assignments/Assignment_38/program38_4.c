///////////////////////////////////////////////////////////
//
//  Function Name : StrCpySmall
//  Description : Copy characters of a string into another string by converting all capital characters into small case
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 25/12/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src>='A' && *src<='Z')
        {
            *dest = *src+32;
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

    StrCpySmall(arr,brr);

    printf("%s",brr);

    return 0;
}
