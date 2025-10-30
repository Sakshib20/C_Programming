///////////////////////////////////////////////////////////
//
//  Function Name : SquareMeter
//  Description : It converts area in square feet into square meter
//  Input : Integer
//  Output : Double
//  Author : Sakshi Pradeep Bhapkar
//  Date : 30/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(int iSqft)
{
    double dSqMt=0.0929*iSqft;

    return dSqMt;
}


int main()
{
    int iValue=0;
    double dRet=0.0;

    printf("Enter area in Square Feet : ");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);
    printf("Area in Square meter is : %f",dRet);
    
    return 0;
}
