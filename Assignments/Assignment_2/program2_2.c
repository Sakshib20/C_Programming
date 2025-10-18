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
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        printf("*\t");
        iNo--;
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