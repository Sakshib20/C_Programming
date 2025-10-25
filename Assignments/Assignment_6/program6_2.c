///////////////////////////////////////////////////////////
//
//  Function Name : CheckGreater
//  Description : It Checks whether number is greater than 100 or not
//  Input : Integer
//  Output : Boolean
//  Author : Sakshi Pradeep Bhapkar
//  Date : 25/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckGreater(int iNo)
{
    if(iNo>100)
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

    printf("Please enter number : ");
    scanf("%d",&iValue);

    bRet=CheckGreater(iValue);

    if(bRet==true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}
