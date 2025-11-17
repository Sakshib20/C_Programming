#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

void ReverseDisplay(int Arr[], int iSize)
{
    int iCnt=0;

    printf("Reversed elements are : ");
    for(iCnt=(iSize-1);iCnt>=0;iCnt--)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int iLength=0, iCnt=0;
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
    ReverseDisplay(iPtr,iLength);

    // STEP 3 : free the memory
    free(iPtr);

    return 0;
}