///////////////////////////////////////////////////////////
//
//  Function Name : sum_natural_numbers
//  Description : returns sum of first N(user defined) natural numbers
//  Input : Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 31/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int sum_natural_numbers(int iNo)
{
    int iCnt=0, iSum=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iSum=iSum+iCnt;
    }
      
    return iSum;
}

// Time Complexity : O(N)

int main()
{
    int iValue=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("%d",sum_natural_numbers(iValue));

    return 0;
}
