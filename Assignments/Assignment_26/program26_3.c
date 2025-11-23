///////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description : Displays the Pattern (ex: input:5, output: 1 * 2 * 3 * 4 * 5 *)
//  Input  : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 21/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t*\t",iCnt);
        
    }
    printf("\n");
}

int main()
{
    int iValue =0;

    printf("Enter the number of element : ");
    scanf("%d",&iValue);

    Pattern(iValue);
    
    return 0;
}
