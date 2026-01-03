///////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : Display's pattern  5 * 4 * 3 * 2 * 1 *
//  Input  : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 03/01/2026
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = -1;
    static int iFreq = 2;

    if(iCnt == -1)
    {
        iCnt = iNo;
    }

    while(iCnt>=1)
    {
        printf("%d\t",iCnt);
        if(iFreq%2==0)
        {
            printf("*\t");
            iFreq= iFreq+2;
        }
        
        iCnt--;
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
