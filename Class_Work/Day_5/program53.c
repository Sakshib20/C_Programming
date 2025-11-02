#include<stdio.h>

void CountFactorsNonFactors(int iNo)
{
    int iCnt=0, iFreq1=0, iFreq2=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1 ; iCnt<iNo ; iCnt++)
    {
        if ((iNo%iCnt)==0)
        {
            iFreq1++;
        }
        else
        {
            iFreq2++;
        }
    }

    printf("Number of factors are : %d\n",iFreq1);
    printf("Number of Non factors are : %d\n",iFreq2);
}

int main()
{
    int iValue=0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    CountFactorsNonFactors(iValue);

    return 0;
}