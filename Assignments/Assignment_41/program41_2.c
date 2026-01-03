///////////////////////////////////////////////////////////
//
//  Function Name : Sum
//  Description : Returns Summation of digits of a number
//  Input  : Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 03/01/2026
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int Sum(int iNo)
{
    static int iSum = 0;

    static int No = -1;

    if(No==-1)
    {
        No=iNo;
    }

    while(No!=0)
    {
        int iDigit = No%10;

        iSum = iSum+iDigit;

        No=No/10;

        Sum(iNo);
    }
    
    return iSum;
}

int main()
{
    int iValue = 0, iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=Sum(iValue);

    printf("Summation is : %d",iRet);

    return 0;
}
