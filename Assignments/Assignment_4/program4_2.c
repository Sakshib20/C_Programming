///////////////////////////////////////////////////////////
//
//  Function Name : FactRev
//  Description : It accepts one number as parameter and display it's factor in decreasing order
//  Input : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 19/10/2025
//
///////////////////////////////////////////////////////////

# include <stdio.h>

void FactRev(int iNo)
{
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=(iNo/2);iCnt>0;iCnt--)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\t",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;
    int iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;

}
