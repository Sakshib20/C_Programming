///////////////////////////////////////////////////////////
//
//  Function Name : Count_Factors
//  Description : It returns the total number of positive factors of number
//  Input : Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 31/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int Count_Factors(int iNo)
{
    int iCnt=0, iCount=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iCount++;
        }
    }

    return iCount;
}

// Time Complexity : O(N)

int main()
{
    int iValue=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Total Factors are : %d",Count_Factors(iValue));
    
    return 0;
}
