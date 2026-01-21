#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;

// < O(N)
bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            return true;                //Not Good Programming Practice
        }
    }
    
    return false; 
}

int main()
{
    int iLength=0, iCnt=0, iValue=0;
    bool bRet=false;
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

    printf("Enter the element to search : ");
    scanf("%d",&iValue);

    // STEP 2 : Use the memory
    bRet=LinearSearch(iPtr,iLength,iValue);

    if(bRet==true)
    {
        printf("%d is present",iValue);
    }
    else
    {
        printf("%d is not present",iValue);
    }

    // STEP 3 : free the memory
    free(iPtr);

    return 0;
}