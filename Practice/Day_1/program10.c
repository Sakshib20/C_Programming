/*
STEP1:Understand the problem statement
STEP2:Write the algorithm
STEP3:Decide the programming language
STEP4:Write the program
STEP5:Test the program
*/

/*
--------ALGORITHM--------
    START
        Accept 1st number as no1
        Accept 2nd number as no2
        Perform addition of no1 and no2
        If the input is negative then convert it into positive
        Display the addition on screen
    STOP
*/



////////////////////////////////////////////////////////
//
//  Requires Header Files
//
///////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////
//
//  Function Name:  AdditionTwoNumbers
//  Description:    It is used to perform addition
//  Input:          Float, Float
//  Output:         Float
//  Author:         Sakshi Pradeep Bhapkar
//  Date:           09/10/2025
//
///////////////////////////////////////////////////////

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum=0;

    //Updator
    if(fNo1<0.0f)
    {
        fNo1=-fNo1;
    }

    if(fNo2<0.0f)
    {
        fNo2=-fNo2;
    }

    fSum=fNo1+fNo2;                                //business logic

    return fSum;
}

///////////////////////////////////////////////////////
//
//  Entry point Function for the application
//
///////////////////////////////////////////////////////
int main()
{
    float fValue1=0.0f, fValue2=0.0f, fRet=0.0f;

    
    printf("Enter 1st number: \n");
    scanf("%f",&fValue1);


    printf("Enter 2nd number: \n");
    scanf("%f",&fValue2);

    fRet=AdditionTwoNumbers(fValue1, fValue2);                        
    printf("Addition is: %f",fRet);
    
    return 0;
}

///////////////////////////////////////////////////////
//
// Testcases succesfully handled by the application
//
//  Input1 : 10.5   Input2 : 3.2    Output : 13.7
//  Input1 : -10.5   Input2 : 3.2    Output : 13.7
//  Input1 : 10.5   Input2 : -3.2    Output : 13.7
//  Input1 : -10.5   Input2 : -3.2    Output : 13.7
//  Input1 : 10.5   Input2 : 0.0    Output : 10.5
//
///////////////////////////////////////////////////////