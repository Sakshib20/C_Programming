#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int Minimum(int Arr[], int iSize)
{
    int iCnt=0, iMin=0;

    for(iCnt=0,iMin=Arr[0];iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin=Arr[iCnt];
        }
    }

    return iMin;
}

int main()
{
    int iLength=0, iCnt=0, iRet=0;
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

    // STEP 2 : Use the memory
    iRet=Minimum(iPtr,iLength);

    printf("Minimum number is : %d",iRet);

    // STEP 3 : free the memory
    free(iPtr);

    return 0;
}