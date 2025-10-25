///////////////////////////////////////////////////////////
//
//  Function Name : CheckEqual
//  Description : It checks wthether numbers are equal or not
//  Input : Integer, Integer
//  Output : Boolean
//  Author : Sakshi Pradeep Bhapkar
//  Date : 25/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckEqual(int iNo1, int iNo2)
{
    if(iNo1==iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1=0, iValue2=0;
    bool bRet=false;

    printf("Please enter two numbers : ");
    scanf("%d %d",&iValue1,&iValue2);

    bRet=CheckEqual(iValue1, iValue2);

    if(bRet==true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}
