///////////////////////////////////////////////////////////
//
//  Function Name : Number
//  Description : It accepts a number as parameter and displays the pattern * #
//  Input : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 29/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\t");
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}
