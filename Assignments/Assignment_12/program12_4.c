///////////////////////////////////////////////////////////
//
//  Function Name : Sum_Of_Even_Factors
//  Description : It returns the sum  of all positive even factors of number(excluding the number itself)
//  Input : Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 31/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int Sum_Of_Even_Factors(int iNo)
{
    int iCnt=0, iSum=0;
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
        {
            if(iCnt%2==0)
            {
                iSum=iSum+iCnt;
            }
        }
    }
    return iSum;
}

// Time Complexity : O(N/2)

int main()
{
    int iValue=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Sum of Even Factors are : %d",Sum_Of_Even_Factors(iValue));
    
    return 0;
}
