///////////////////////////////////////////////////////////
//
//  Function Name : StrCpyX
//  Description : Copy characters of a string into another string by removing whitespaces
//  Input  : String, String
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 25/12/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src == ' ')
        {
            src++;
            
        }
        else
        {
            *dest = *src;
            src++;
            dest++;
        }
        
       
    }
    *dest='\0';
}



int main()
{
    char arr[30]= "Marvel  lo us Pyt hon";
    char brr[30];

    StrCpyX(arr,brr);

    printf("%s",brr);

    return 0;
}
