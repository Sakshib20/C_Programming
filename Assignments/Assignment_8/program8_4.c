///////////////////////////////////////////////////////////
//
//  Function Name : Table
//  Description :  It accepts a number as parameter and display its table
//  Input : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 26/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Table(int iNo)
{
    int iCnt=0;
    int iAns=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=10;iCnt++)
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

    Table(iValue);

    return 0;
}
