///////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description : It displays the full name of user
//  Input : Void
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 21/01/2026
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name : ");
    scanf("%[^'\n']s",Name);

    printf("Your name is : %s",Name);

    return 0;
}