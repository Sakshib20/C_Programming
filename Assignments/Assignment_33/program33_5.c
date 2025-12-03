///////////////////////////////////////////////////////////
//
//  Function Name : ChkAlpha
//  Description : Displays Exam time as per division
//  Input  : Character
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 03/12/2025
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv>='a' && chDiv<='z') || chDiv>='A' && chDiv<='Z')
    {
        if(chDiv=='A' || chDiv=='a')
        {
            printf("Your Exam is at 7AM");
        }
        else if(chDiv=='B' || chDiv=='b')
        {
            printf("Your Exam is at 8:30 AM");
        }
        if(chDiv=='C' || chDiv=='c')
        {
            printf("Your Exam is at 9:20 AM");
        }
        if(chDiv=='D' || chDiv=='d')
        {
            printf("Your Exam is at 10:30 AM");
        }
    }
    else
    {
        printf("Enter Valid Division between A-D");
    }
}


int main()
{
    char cValue ='\0';

    printf("Enter Your Division : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

}
