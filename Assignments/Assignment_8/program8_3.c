///////////////////////////////////////////////////////////
//
//  Function Name : Factorial
//  Description : It gives factorial of given number
//  Input : Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 26/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
    int iFact=1;
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        iFact=iFact*iCnt;
    }

}

//Time Complexity : O(N)


int main()
{
    int iValue=0, iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);
    
    iRet=Factorial(iValue);

    printf("Factorial of a number is : %d",iRet);
    
    return 0;
}
