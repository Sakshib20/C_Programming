///////////////////////////////////////////////////////////
//
//  Function Name : print_numbers
//  Description : prints number from 1 to user defined number
//  Input : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 31/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void print_numbers(int iLimit)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iLimit;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

// Time Complexity : O(N)

int main()
{
    int iValue=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    print_numbers(iValue);

    return 0;
}
