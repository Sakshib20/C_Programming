///////////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Description : It Calculates the percentage
//  Input : Integer, Integer
//  Output : Float
//  Author : Sakshi Pradeep Bhapkar
//  Date : 25/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

float Percentage(int iTotal, int iObt)
{
    // float fPercent=0.0f;
    float fPercent=((float)iObt/iTotal)*100;

    return fPercent;
}

int main()
{
    int iValue1=0, iValue2=0;
    float fRet=0.0f;

    printf("Please enter total marks : ");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks : ");
    scanf("%d",&iValue2);

    fRet=Percentage(iValue1,iValue2);

    printf("Your percentage is : %f",fRet);

    return 0;
}
