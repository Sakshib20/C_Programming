///////////////////////////////////////////////////////////
//
//  Function Name : print_even_numbers
//  Description : prints all even number upto user defined number
//  Input : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 31/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void print_even_numbers(int iLimit)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iLimit;iCnt++)
    {
        if(iCnt%2==0)
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

    print_even_numbers(iValue);

    return 0;
}
