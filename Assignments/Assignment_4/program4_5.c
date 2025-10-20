///////////////////////////////////////////////////////////
//
//  Function Name : SumNonFact
//  Description : It accepts one number as parameter and return difference between summation of all it's factors and non factors
//  Input : Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 19/10/2025
//
///////////////////////////////////////////////////////////

# include <stdio.h>

int FactDiff(int iNo)
{
    int iCnt=0, iFactSum=0, iNonFactSum=0, iAns=0;

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iFactSum=iFactSum+iCnt;
        }
        else if((iNo%iCnt)!=0)
        {
            iNonFactSum=iNonFactSum+iCnt;
        }
    }

    iAns=iFactSum-iNonFactSum;

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("%d",iRet);

    return 0;

}
