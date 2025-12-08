///////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : Displays the character if it's small case it display's capital and vice versa
//  Input  : Character
//  Output : void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 07/12/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    if(ch>='A' && ch<='Z')
    {
        while(ch !='[')
        { 
            printf("%c\t",ch);
            ch++;
        }
    }
    else if(ch>='a' && ch<='z')
    {
        while(ch != '`')
        {
            printf("%c\t",ch);
            ch--;
        }
    }
    else
    {
        return;
    }
    
}

int main()
{
    char cValue='\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}