///////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description : It checks whether a number is even or odd
//  Input : Integer
//  Output : Boolean
//  Author : Sakshi Pradeep Bhapkar
//  Date : 22/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNum)
{
    if(iNum%2==0)
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
    int number=0;
    bool bRet=false;

    printf("Enter number : ");
    scanf("%d",&number);

    bRet=CheckEvenOdd(number);

    if(bRet==true)
    {
        printf("%d is an Even Number",number);
    }
    else
    {
        printf("%d is an Odd Number",number);
    }

    return 0;
}
