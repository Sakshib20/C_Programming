///////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : Display's pattern  * * * * *
//  Input  : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 03/01/2026
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 1;

    while(iCnt<=iNo)
    {
        printf("*\t");
        iCnt++;
        Display(iNo);  
    }
}



int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
