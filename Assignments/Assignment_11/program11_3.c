///////////////////////////////////////////////////////////
//
//  Function Name : RangeSum
//  Description : It accepts range as parameter and return addition of all numbers in between that range
//  Input : Integer, Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 31/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt=0, iSum=0;

    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        iSum=iSum+iCnt;
    }
    
    return iSum;
}

// Time Complexity : O(N)

int main()
{
    int iValue1=0, iValue2=0, iRet=0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    if(iValue1>iValue2 || iValue1<0 || iValue2<0)
    {
        printf("Invalid range ");
    }

    else
    {
        iRet=RangeSum(iValue1, iValue2);
        printf("Addition is : %d",iRet);
    }
    
    return 0;
}
