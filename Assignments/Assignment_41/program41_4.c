///////////////////////////////////////////////////////////
//
//  Function Name : Fact
//  Description : Returns Factorial of a number
//  Input  : Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 03/01/2026
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int Fact(int iNo)
{
    static int iFact= 1;

    if(iNo>=1)
    {
        iFact=iFact*iNo;

        iNo--;
        Fact(iNo);
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=Fact(iValue);

    printf("Factorial is : %d",iRet);

    return 0;
}
