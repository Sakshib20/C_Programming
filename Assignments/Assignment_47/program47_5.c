///////////////////////////////////////////////////////////
//
//  Function Name : CountPrime
//  Description : Counts the prime number from SLLL
//  Input  : Integer Pointer(Array Address)
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 12/01/2026
//
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        (*first) = newn;
    }
    else
    {
        newn->next = *first;
       (*first)= newn;
    }
}


int CountPrime(PNODE first)
{
    int iCount = 0, iCnt =0, iFreq = 0;

   while(first != NULL)
   {
        iCount=0;
        for(iCnt = 2;iCnt<=(first->data)/2;iCnt++)
        {
            if((first->data)%iCnt == 0)
            {
                iCount++;
            }  
        }
        if(iCount == 0)
        {
            iFreq++;
        }
        first = first->next;
   }

   return iFreq;

}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 675);
    InsertFirst(&head, 342);
    InsertFirst(&head, 11);
    InsertFirst(&head, 113);
    InsertFirst(&head, 457);
    InsertFirst(&head, 11);
    InsertFirst(&head, 12);

    iRet=CountPrime(head);
    printf("Total Prime numbers are : %d\n",iRet);

    return 0;
}




