///////////////////////////////////////////////////////////
//
//  Function Name : MultDigits
//  Description : It returns the multiplication of all digits
//  Input : Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 01/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit=0, iMult=1;

    while(iNo!=0)
    {
        iDigit=iNo%10;

        if(iDigit==0)
        {
            iMult=iMult;
        }
        else
        {
            iMult=iMult*iDigit;
        }
        iNo=iNo/10;
    }
    
    return iMult;
}

// Time Complexity : O(N)

int main()
{
    int iValue=0, iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}
