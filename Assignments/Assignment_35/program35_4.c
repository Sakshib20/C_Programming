///////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Description : Checks whether a string contains vowels in it or not
//  Input  : Character
//  Output : Boolean
//  Author : Sakshi Pradeep Bhapkar
//  Date : 09/12/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str=='a' || *str=='e' || *str=='i' ||*str=='o' || *str=='u')
        {
            return true;
        }
        *str++;
    }
    return false;
}

int main()
{
    char arr[20];
    bool bRet=false;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    bRet=ChkVowel(arr);
    
    if(bRet==true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}