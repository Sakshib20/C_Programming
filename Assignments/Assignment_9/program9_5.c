///////////////////////////////////////////////////////////
//
//  Function Name : FactorialDiff
//  Description : It returns difference between even factorial and odd factorial of a given number
//  Input : Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 29/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt=0, iEFact=1, iOFact=1, iDiff=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    for(iCnt=iNo;iCnt>0;iCnt--)
    {
        if(iCnt%2==0)
        {
            iEFact=iEFact*iCnt;
        }
        if(iCnt%2!=0)
        {
            iOFact=iOFact*iCnt;
        }
    }

    iDiff=iEFact-iOFact;

    return iDiff;
}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);
    printf("Factorial difference is : %d",iRet);
    
    return 0;
}
