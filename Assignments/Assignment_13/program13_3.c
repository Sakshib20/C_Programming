///////////////////////////////////////////////////////////
//
//  Function Name : print_odd_numbers
//  Description : prints all odd number upto user defined number
//  Input : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 31/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void print_odd_numbers(int iLimit)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iLimit;iCnt++)
    {
        if(iCnt%2!=0)
        {
            printf("%d\t",iCnt);
        }
    }
}

// Time Complexity : O(N)

int main()
{
    int iValue=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    print_odd_numbers(iValue);

    return 0;
}
