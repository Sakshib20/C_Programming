///////////////////////////////////////////////////////////
//
//  Function Name : CircleArea
//  Description : It accept radius of circle from user and returns it's area
//  Input : Float
//  Output : Double
//  Author : Sakshi Pradeep Bhapkar
//  Date : 30/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea=0.0, PI = 3.14;

    dArea=PI*fRadius*fRadius;

    return dArea;
}

int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter the Radius : ");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);

    printf("Area of circle is : %f",dRet);
    
    return 0;
}
