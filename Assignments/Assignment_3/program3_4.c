///////////////////////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Description : It accept one character as parameter and convert case of that character
//  Input : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 19/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<ctype.h>

void DisplayConvert(char CValue)
{
    if((isupper(CValue))!=0)
    {
        printf("%c",tolower(CValue));
    }
    else if((islower(CValue))!=0)
    {
        printf("%c",toupper(CValue));
    }
}
int main()
{
    char cValue='\0';

    printf("Enter character : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    
    return 0;

}
