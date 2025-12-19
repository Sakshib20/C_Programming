///////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigit
//  Description : Displays only digits from the string
//  Input  : Character
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 19/12/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str>='0' && *str<='9')
        {
            printf("%c",*str);
        }

        str++;
    }
    
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}
