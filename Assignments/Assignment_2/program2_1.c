///////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : It is used to Display the user defined number of '*' on the screen
//  Input : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 18/10/2025
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

    while(iCnt<iNo)
    {
        printf("*\t");
        iCnt++;
    }
}

int main()
{
    int iValue=0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}