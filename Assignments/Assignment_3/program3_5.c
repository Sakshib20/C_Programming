///////////////////////////////////////////////////////////
//
//  Function Name : CheckVowel
//  Description : It accept one character as parameter and check whether that character is vowel or not
//  Input : Character
//  Output : Boolean
//  Author : Sakshi Pradeep Bhapkar
//  Date : 23/12/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

# define TRUE 1
# define FALSE 0 

BOOL CheckVowel(char CValue)
{
    
    if(CValue=='a' ||CValue=='e' || CValue=='i' ||CValue=='o' ||CValue=='u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter character : \n");
    scanf("%c",&cValue);

    bRet=CheckVowel(cValue);

    if(bRet==TRUE)
    {
        printf("It is Vowel");
    }
    else    
    {
        printf("It is not vowel");
    }
    
    return 0;
}
