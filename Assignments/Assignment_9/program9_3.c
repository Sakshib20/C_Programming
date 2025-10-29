///////////////////////////////////////////////////////////
//
//  Function Name : EvenFactorial
//  Description : It returns even factorial of a given number
//  Input : Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 29/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt=0, iFact=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    if(iNo%2!=0)
    {
        iNo=iNo-1;
    }

    for(iCnt=iNo;iCnt>=2;iCnt--)
    {
        if(iCnt%2==0)
        {
            iFact=iFact*iCnt;
        }
    }
    
    return iFact;
}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=EvenFactorial(iValue);
    printf("Even Factorial of a number is : %d",iRet);
    
    return 0;
}
