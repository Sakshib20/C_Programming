///////////////////////////////////////////////////////////
//
//  Function Name : CountEven
//  Description : It returns the count of even digits
//  Input : Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 01/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit=0, iCnt=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;

        if(iDigit%2==0)
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

    iRet=CountEven(iValue);

    printf("%d",iRet);

    return 0;
}
