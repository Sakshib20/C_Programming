///////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : It accepts a number as parameter and print numbers from 1 till that number on screen
//  Input : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 26/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

// Time Complexity : O(N)

int main()
{
    int iValue=0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}
