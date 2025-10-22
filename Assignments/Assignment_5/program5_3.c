///////////////////////////////////////////////////////////
//
//  Function Name : CheckLeapYear
//  Description : It checks whether a year is a Leap year or not
//  Input : Integer
//  Output : Boolean
//  Author : Sakshi Pradeep Bhapkar
//  Date : 22/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckLeapYear(int iYear)
{
    if(iYear%4==0)
    {
        if(iYear%100==0)
        {
            if(iYear%400==0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    else
    {
        return false;
    }
}


int main()
{
    int iYr=0;
    bool bRet=false;

    printf("Enter year : ");
    scanf("%d",&iYr);

    bRet=CheckLeapYear(iYr);

    if(bRet==true)
    {
        printf("%d is Leap Year",iYr);
    }
    else
    {
        printf("%d is  not a Leap Year",iYr);
    }
 
    return 0;
}
