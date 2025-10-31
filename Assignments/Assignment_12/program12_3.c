///////////////////////////////////////////////////////////
//
//  Function Name : Sum_Of_Factors
//  Description : It returns the sum  of all positive factors of number
//  Input : Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 31/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int Sum_Of_Factors(int iNo)
{
    int iCnt=0, iSum=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iSum=iSum+iCnt;
        }
    }

    return iSum;
}

// Time Complexity : O(N)

int main()
{
    int iValue=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Sum of Factors are : %d",Sum_Of_Factors(iValue));
    
    return 0;
}
