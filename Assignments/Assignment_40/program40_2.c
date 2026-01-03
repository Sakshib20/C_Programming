///////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : Display's pattern  1 2 3 4 5
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
        printf("%d\t",iCnt);
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
