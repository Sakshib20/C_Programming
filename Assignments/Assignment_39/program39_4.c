///////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : Display's pattern  A B C D E F
//  Input  : Void
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 02/01/2026
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    static int iCnt = 65;

    while(iCnt<=70)
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
