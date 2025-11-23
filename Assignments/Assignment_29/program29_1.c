///////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description : Displays the Pattern 
//  Input  : Integer, Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 23/11/2025
//
///////////////////////////////////////////////////////////

/*sample :
Input : iRows=4  iCol=4

Output : 1 2 3 4
         5 6 7 8
         9 1 2 3
         4 5 6 7
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i=0, j=0, iCnt=0;

    iCnt=1;

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++,iCnt++)
        {
            printf("%d\t",iCnt);
            if(iCnt==9)
            {
                iCnt=0;
            }
        }
        
        printf("\n");
    }
}

int main()
{
    int iValue1=0, iValue2=0;

    printf("Enter the number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter the number of columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);
    
    return 0;
}
