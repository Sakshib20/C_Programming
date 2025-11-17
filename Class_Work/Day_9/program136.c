#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int FrequencyCalculate(int Arr[], int iSize, int iNo)
{
    int iCnt=0, iFreq=0;
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt])==iNo)
        {
            iFreq++;
        }
    }

    return iFreq;
}

int main()
{
    int iLength=0, iCnt=0, iValue=0, iRet=0;
    IPTR iPtr=NULL;

    printf("Enter the number of elements : ");
    scanf("%d",&iLength);

    // STEP 1 :  Allocate the memory
    iPtr=(IPTR)malloc(iLength*sizeof(int));

    if(NULL==iPtr)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the values : \n");
    
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    printf("Enter the element whose frequency u want : ");
    scanf("%d",&iValue);

    // STEP 2 : Use the memory
    iRet=FrequencyCalculate(iPtr,iLength,iValue);
    printf("Frequency of %d is : %d",iValue,iRet);

    // STEP 3 : free the memory
    free(iPtr);

    return 0;
}