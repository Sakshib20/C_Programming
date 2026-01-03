///////////////////////////////////////////////////////////
//
//  Function Name : Mult
//  Description : Returns Product of digit of number
//  Input  : Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 03/01/2026
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int Mult(int iNo)
{
    static int iMult = 1;

    static int No = -1;

    if(No==-1)
    {
        No = iNo;
    }

    if(No>0)
    {
        int iDigit = No%10;

        iMult= iMult*iDigit;

        No = No/10;

        Mult(No);
        
    }

    return iMult;
    
}

int main()
{
    int iValue = 0, iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=Mult(iValue);

    printf("Multiplication is : %d",iRet);

    return 0;
}
