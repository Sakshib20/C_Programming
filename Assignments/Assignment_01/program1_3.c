///////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description : It is used to print 5 to 1 numbers on screen
//  Author : Sakshi Pradeep Bhapkar
//  Date : 18/10/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i=0;
    i = 5;
    while(i>0)
    {
        printf("%d\t",i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}