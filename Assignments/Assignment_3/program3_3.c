///////////////////////////////////////////////////////////
//
//  Function Name : DisplayEvenFactor
//  Description : It accepts a number as parameter and prints the evenfactors of that number
//  Input : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 19/10/2025
//
///////////////////////////////////////////////////////////

# include <stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i=0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for(i=1;i<=(iNo/2);i++)
    {
        if((iNo%i)==0 && (i%2)==0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;

}
