///////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description : It is used to check whether number is even or odd
//  Input : Integer
//  Output : Boolean
//  Author : Sakshi Pradeep Bhapkar
//  Date : 18/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if(iNo%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);

    if(bRet==true)
    {
        printf("%d is Even number",iValue);
    }
    else
    {
        printf("%d is Odd number",iValue);
    }

    return 0;
}