///////////////////////////////////////////////////////////
//
//  Function Name : NonFact
//  Description : It accepts one number as parameter and display all of it's non factor
//  Input : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 19/10/2025
//
///////////////////////////////////////////////////////////

# include <stdio.h>

void NonFact(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;

}
