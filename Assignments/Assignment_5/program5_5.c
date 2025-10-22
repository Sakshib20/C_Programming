///////////////////////////////////////////////////////////
//
//  Function Name : FindLargest
//  Description : It finds the largest among three numbers
//  Input : Integer, Integer, Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 22/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int FindLargest(int iNo1, int iNo2, int iNo3)
{
    if(iNo1>iNo2 && iNo1>iNo3)
    {
        return iNo1;
    }
    else if(iNo2>iNo1 && iNo2>iNo3)
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}


int main()
{
    int iNum1, iNum2, iNum3, iResult;

    printf("Enter three numbers : ");
    scanf("%d %d %d",&iNum1,&iNum2,&iNum3);

    iResult=FindLargest(iNum1,iNum2,iNum3);

    printf("Larget number is : %d",iResult);

    return 0;
}
