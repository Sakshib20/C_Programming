///////////////////////////////////////////////////////////
//
//  Function Name : DisplayASCII
//  Description : Displays the ASCII table which contains symbols, Decimal, Hexadecimal and Octal representation from 0 to 255
//  Input  : Void
//  Output : void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 06/12/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf(" Char | Dec | Oct | Hex\n");

    for(iCnt=0; iCnt<=255;iCnt++)
    {
        printf("%-4c\t%-4d\t%-4o\t%-4x\t\n",(char)iCnt,(char)iCnt,(char)iCnt,(char)iCnt);
    }
}

int main()
{

    DisplayASCII();

    return 0;
}