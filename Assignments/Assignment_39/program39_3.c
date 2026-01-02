///////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : Display's pattern  1 2 3 4 5
//  Input  : Void
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 02/01/2026
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    static int iCnt = 5;

    while(iCnt>=1)
    {
        printf("%d\t",iCnt);
        iCnt--;
        Display();  
    }
}



int main()
{
    Display();

    return 0;
}
