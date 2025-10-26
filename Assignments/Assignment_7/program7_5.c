///////////////////////////////////////////////////////////
//
//  Function Name : MultipleDisplay
//  Description : It accepts a number as parameter and print first 5 multiples of that number
//  Input : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 26/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt=0;

    for(iCnt=iNo;iCnt<(iNo*6);iCnt++)
    {
        if((iCnt%iNo)==0)
        {
            printf("%d\t",iCnt);
            
        }
    }
}

//Time Complexity : O(6N)

int main()
{
    int iValue=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    
    
    return 0;
}
