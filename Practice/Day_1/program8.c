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
        Display the addition on screen
    STOP
*/
#include<stdio.h>


float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum=0.0f;
    fSum=fNo1+fNo2;                                //business logic
    return fSum;
}

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