///////////////////////////////////////////////////////////
//
//  Function Name : PrintEven
//  Description : It accepts one number and print that number of even numbers on screen
//  Input : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 19/10/2025
//
///////////////////////////////////////////////////////////

# include <stdio.h>

void PrintEven(int iNo)
{
    int iCnt=0;
    int iNum=0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for(iCnt=1,iNum=2;iCnt<=iNo;iCnt++,iNum+=2)
    {
        if((iNum%2)==0)
        {
            printf("%d\t",iNum);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;

}
