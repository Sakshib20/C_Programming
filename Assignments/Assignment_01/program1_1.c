///////////////////////////////////////////////////////////
//
//  Function Name : Divide
//  Description : It is used to perform division of two numbers
//  Input : Integer, Integer
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 18/10/2025
//
///////////////////////////////////////////////////////////

# include <stdio.h>

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2==0)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;
    return iAns;
}

int main()
{
int iValue1 = 15, iValue2 = 5;
int iRet = 0;

iRet = Divide(iValue1, iValue2);

printf("Division is %d",iRet);

return 0;

}
