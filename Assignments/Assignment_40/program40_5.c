///////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : Display's pattern  a b c d e f
//  Input  : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 03/01/2026
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 1;

    static int cVal = 97;

    while(iCnt<=iNo)
    {
        printf("%c\t",(char)cVal);

        iCnt++;
        cVal++;

        Display(iNo);  
    }
}



int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
