///////////////////////////////////////////////////////////
//
//  Function Name : Number
//  Description : It accepts a number as parameter and if number is less than 50 it prints small, if it is greater than 50 and less than 100 it prints medium, if it is greater than 100 it prints large
//  Input : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 26/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Number(int iNo)
{
    if(iNo<50)
    {
        printf("Small");
    }
    else if(iNo>50 && iNo<100)
    {
        printf("Medium");
    }
    else if (iNo>100)
    {
        printf("Large");
    }
    
}

int main()
{
    int iValue=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Number(iValue);
    
    return 0;
}
