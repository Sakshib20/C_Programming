///////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : Display's the ASCII value of character in Decimal, Octal and Hexadecimal
//  Input  : Character
//  Output : void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 07/12/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display(char ch)
{
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("%d\n",ch);
        printf("%#o\n",ch);
        printf("%#x\n",ch);
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