///////////////////////////////////////////////////////////
//
//  Function Name : Count
//  Description : accepts number as parameter and count frequency of such a digits which are less than 6
//  Input : Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 31/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int Count(int iNo)
{
    int iDigit=0, iFreq=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;

        if(iDigit<6)
        {
            iFreq++;
        }

        iNo=iNo/10;
    }
    return iFreq;
}

// Time Complexity : O(N)

int main()
{
    int iValue=0, iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=Count(iValue);

    printf("%d",iRet);

    return 0;
}
