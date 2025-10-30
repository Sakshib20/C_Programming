///////////////////////////////////////////////////////////
//
//  Function Name : FhtoCs
//  Description : It convert Fahrenheit temperature in Celcius
//  Input : Float
//  Output : Double
//  Author : Sakshi Pradeep Bhapkar
//  Date : 30/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCs=0.0;
    dCs=(fTemp-32)*(5.0/9.0);
    return dCs;
}

int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);
    printf("Temperature in Celcius is : %lf",dRet);

    return 0;
}
