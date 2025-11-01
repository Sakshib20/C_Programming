///////////////////////////////////////////////////////////
//
//  Function Name : CountRange
//  Description : It returns the count of digits in between 3 and 7
//  Input : Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 01/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit=0, iCnt=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;

        if(iDigit>3 && iDigit<7)
        {
            iCnt++;
        }

        iNo=iNo/10;
    }
    return iCnt;
}

// Time Complexity : O(N)

int main()
{
    int iValue=0, iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=CountRange(iValue);

    printf("%d",iRet);

    return 0;
}
