///////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : It is used to Display 1st number in second number of times
//  Input : Integer, Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 18/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt=0;
    
    if(iFrequency<0)
    {
        iFrequency=-iFrequency;
    }

    for(iCnt=1;iCnt<=iFrequency;iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    printf("Enter Frequency : \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}