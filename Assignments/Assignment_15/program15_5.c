///////////////////////////////////////////////////////////
//
//  Function Name : CountDiff
//  Description : It returns the difference between summation of even digits and summation of odd digits
//  Input : Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 01/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit=0, iEven=0, iOdd=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;

        if(iDigit!=0)
        {
            if(iDigit%2==0)
            {
                iEven=iEven+iDigit;
            }
            else
            {
                iOdd=iOdd+iDigit;
            }
        }

        iNo=iNo/10;
    }
    
    return iEven-iOdd;
}

// Time Complexity : O(N)

int main()
{
    int iValue=0, iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}
