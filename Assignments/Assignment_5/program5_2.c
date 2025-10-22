///////////////////////////////////////////////////////////
//
//  Function Name : FindMax
//  Description : It finds the maximum of two numbers
//  Input : Integer, Integer
//  Output : Integer 
//  Author : Sakshi Pradeep Bhapkar
//  Date : 22/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int FindMax(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int iNum1, iNum2, iResult;

    printf("Enter two numbers : ");
    scanf("%d %d",&iNum1,&iNum2);

    iResult=FindMax(iNum1,iNum2);
    printf("Maximum is : %d",iResult);

    return 0;
}
