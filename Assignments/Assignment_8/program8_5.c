///////////////////////////////////////////////////////////
//
//  Function Name : Table
//  Description :  It accepts a number as parameter and display its table in reverse order
//  Input : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 26/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt=0, iAns=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=10;iCnt>=1;iCnt--)
    {
        iAns=iCnt*iNo;
        printf("%d\t",iAns);
    }
}

// Time Complexity : O(1)

int main()
{
    int iValue=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}
