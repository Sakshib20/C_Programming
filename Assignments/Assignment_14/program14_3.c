///////////////////////////////////////////////////////////
//
//  Function Name : CountTwo
//  Description : accepts number as parameter and count frequency of 2 in it
//  Input : Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 31/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>


int CountTwo(int iNo)
{
    int iDigit=0, iFreq=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;

        if(iDigit==2)
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

    iRet=CountTwo(iValue);

    printf("%d",iRet);

    return 0;
}
