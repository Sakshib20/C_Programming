///////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description : Displays the Pattern (ex: input:8, output: 2 4 6 8 10 12 14 16)
//  Input  : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 21/11/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int i=0, j=2;

    for(i=1;i<=iNo;i++)
    {
        if((j%2)==0)
        {
            printf("%d\t",j);

            j=j+2;
        }
    }
}

int main()
{
    int iValue =0;

    printf("Enter the number of element : ");
    scanf("%d",&iValue);

    Pattern(iValue);
    
    return 0;
}
