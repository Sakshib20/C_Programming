///////////////////////////////////////////////////////////
//
//  Function Name : ChkZero
//  Description : accepts number as parameter and check whether it contains 0 in it or not
//  Input : Integer
//  Output : BOOL
//  Author : Sakshi Pradeep Bhapkar
//  Date : 31/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        iNo=iNo/10;
    }
}

// Time Complexity : O(N)

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);

    if(bRet==TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}
