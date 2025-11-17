#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt=0, iEven=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iEven++;
        }
    }

    return iEven;
}

int main()
{
    int iLength=0, iCnt=0, iRet=0;
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

    iRet=CountEven(ptr, iLength);
    printf("Total even elements are : %d",iRet);

    free(ptr);
    return 0;
}