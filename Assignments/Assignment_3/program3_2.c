///////////////////////////////////////////////////////////
//
//  Function Name : DisplayFactor
//  Description :  It accepts one number as parameter and print the factors of that number on screen
//  Input : Integer
//  Input : Integer
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 19/10/2025
//
///////////////////////////////////////////////////////////

# include <stdio.h>

void DisplayFactor(int iNo)
{
    int i=0;

    if(iNo<=0)
    {
        iNo=-iNo;
    }

    for(i=1;i<=(iNo/2);i++)
    {
        if((iNo%i)==0)
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

    DisplayFactor(iValue);

    return 0;

}
