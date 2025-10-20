///////////////////////////////////////////////////////////
//
//  Function Name : MultFact
//  Description : It accepts one number as parameter and display it's multiplication of factors
//  Input : Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 19/10/2025
//
///////////////////////////////////////////////////////////

# include <stdio.h>

int MultFact(int iNo)
{
    int iCnt=0, iAns=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
        iAns=iAns*iCnt;
        }
    }

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);

    printf("%d",iRet);

    return 0;

}
