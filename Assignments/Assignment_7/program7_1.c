///////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description : It prints the user defined number of $ & * on screen
//  Input : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 26/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue=0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
