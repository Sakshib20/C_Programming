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

Output : A B C D
         a b c d
         A B C D
         a b c d
*/

#include<stdio.h>
#include<ctype.h>

void Pattern(int iRow, int iCol)
{
    int i=0, j=0;
    char ch='\0';

    for(i=1;i<=iRow;i++)
    {
        ch='a';
        for(j=1;j<=iCol;j++,ch++)
        {
            if((i%2)==0)
            {
                printf("%c\t",ch);
            }
            else
            {
                printf("%c\t",toupper(ch));
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
