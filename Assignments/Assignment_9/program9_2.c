///////////////////////////////////////////////////////////
//
//  Function Name : DollarToINR
//  Description : It accepts amount in US dollar and return its corresponding value in Indian currency
//  Input : Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 29/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int DollarToINR(int iNo)
{
    int INR=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    INR=iNo*70;

    return INR;
}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet=DollarToINR(iValue);
    printf("Value in INR is %d",iRet);
    
    return 0;
}
