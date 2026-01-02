///////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : Display's pattern  a b c d e f
//  Input  : Void
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 02/01/2026
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    static int iCnt = 97;

    while(iCnt<=102)
    {
        printf("%c\t",(char)iCnt);
        iCnt++;
        Display();  
    }
}



int main()
{
    Display();

    return 0;
}
