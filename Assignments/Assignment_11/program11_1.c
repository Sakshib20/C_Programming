///////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplay
//  Description : It accepts range as parameter and display all numbers between that range
//  Input : Integer, Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 31/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt=0;
    if(iStart>iEnd)
    {
        printf("Invalid range");
    }
    else
    {
        for(iCnt=iStart;iCnt<=iEnd;iCnt++)
        {
            printf("%d\t",iCnt);
        }
    }
}

// Time Complexity : O(N)

int main()
{
    int iValue1=0, iValue2=0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);
    
    return 0;
}
