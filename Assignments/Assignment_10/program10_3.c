///////////////////////////////////////////////////////////
//
//  Function Name : KMtoMeter
//  Description : It accepts distance in kilometer and return the distance in meter
//  Input : Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 30/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int KMtoMeter(int iKm)
{
    int iMet=1000, iKtM=0;

    iKtM=iKm*iMet;

    return iKtM;
}

int main()
{
    int iValue=0, iRet=0;

    printf("Enter distance in Kilometer(Km): ");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);
    printf("Distance in Meter is : %d",iRet);

    return 0;
}
