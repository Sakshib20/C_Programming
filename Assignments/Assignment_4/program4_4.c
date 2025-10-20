///////////////////////////////////////////////////////////
//
//  Function Name : SumNonFact
//  Description : It accepts one number as parameter and display summation of all of it's non factor
//  Input : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 19/10/2025
//
///////////////////////////////////////////////////////////

# include <stdio.h>

int SumNonFact(int iNo)
{
    int iCnt=0, iSum=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            iSum=iSum+iCnt;
        }
    }
    
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);
    printf("%d",iRet);

    return 0;

}
