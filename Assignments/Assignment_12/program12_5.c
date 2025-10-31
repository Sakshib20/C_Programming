///////////////////////////////////////////////////////////
//
//  Function Name : is_divisible_by_five
//  Description : It checks if number is divisible by 5
//  Input : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 31/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool is_divisible_by_five(int iNo)
{
    if(iNo%5==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Time Complexity : O(1)

int main()
{
    int iValue=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("%s",is_divisible_by_five(iValue) ? "Yes" : "No");
    
    return 0;
}
