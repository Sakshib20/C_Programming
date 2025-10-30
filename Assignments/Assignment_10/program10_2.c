///////////////////////////////////////////////////////////
//
//  Function Name : RectArea
//  Description : It accepts width & height of rectange from user and return it's area
//  Input : Float, Float
//  Output : Double
//  Author : Sakshi Pradeep Bhapkar
//  Date : 30/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea=0.0;
    dArea=fWidth*fHeight;

    return dArea;
}

int main()
{
    float fValue1=0.0, fValue2=0.0;
    double dRet=0.0;

    printf("Enter Width : ");
    scanf("%f",&fValue1);

    printf("Enter Height : ");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1, fValue2);
    printf("Area of Rectangle is : %f",dRet);
    
    return 0;
}
