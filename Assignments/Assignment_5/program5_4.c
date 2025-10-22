///////////////////////////////////////////////////////////
//
//  Function Name : CheckNumberType
//  Description : It checks whether a number is positive, negative or zero
//  Input : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 22/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void CheckNumberType(int iNum)
{
    if(iNum>0)
    {
        printf("%d is positive number",iNum);
    }
    else if (iNum==0)
    {
        printf("%d is Zero",iNum);
    }
    else
    {
        printf("%d is negative number",iNum);
    }
    
}


int main()
{
    int inumber;

    printf("Enter number : ");
    scanf("%d",&inumber);
    
    CheckNumberType(inumber);
 
    return 0;
}
