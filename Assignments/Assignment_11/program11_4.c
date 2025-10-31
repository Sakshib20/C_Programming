///////////////////////////////////////////////////////////
//
//  Function Name : RangeSumEven
//  Description : It accepts range as parameter and return addition of all even numbers in between that range
//  Input : Integer, Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 31/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt=0, iSum=0;

    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if(iCnt%2==0)
        {
            iSum=iSum+iCnt;
        }
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
        iRet=RangeSumEven(iValue1, iValue2);
        printf("Addition is : %d",iRet);
    }
    
    return 0;
}
