///////////////////////////////////////////////////////////
//
//  Function Name : StrCpyRev
//  Description : Copy characters of a string into another string in reverse order
//  Input  : String, String
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 19/12/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    char *temp = src;
    
    while(*src != '\0')
    {
        src++;
    }
    src--;

    while(src >= temp)
    {
        *dest = *src;

        dest++;
        src--;
    }
    *dest='\0';
}



int main()
{
    char arr[30]= "Marvellous Python";
    char brr[30];

    StrCpyRev(arr,brr);

    printf("%s",brr);

    return 0;
}
