///////////////////////////////////////////////////////////
//
//  Function Name : OddDisplay
//  Description : It accepts a number as parameter and print all odd number upto that number
//  Input : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 26/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2)!=0)
        {
            printf("%d\t",iCnt);
        }
    }
}

//Time Complexity : O(N)

int main()
{
    int iValue=0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    
    return 0;
}
