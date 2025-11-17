#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iSize)
{
    int iCnt=0, iTotal=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iTotal=iTotal+Arr[iCnt];
    }

    return ((float)iTotal/(float)iSize);      //Issue
}

int main()
{
    int iLength=0, iCnt=0;
    float fRet=0;
    int *ptr=NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iLength);                           

    ptr=(int*)malloc(iLength*sizeof(int));      
    if(NULL == ptr)                                //Industrial way of coding
    {
        printf("unable to allocate memory");
        return -1;
    }            
    printf("Enter the elements: ");

    for(int iCnt=0; iCnt<iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    fRet=Average(ptr, iLength);
    printf("Average elements are : %f",fRet);

    free(ptr);
    return 0;
}