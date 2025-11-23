///////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description : Displays the Pattern (ex: input:5, output: A B C D E)
//  Input : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 21/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt=0;
    int cValue=65;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%c\t",(char)cValue);
        cValue++;
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
