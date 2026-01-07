///////////////////////////////////////////////////////////
//
//  Function Name : DisplayPrime
//  Description : Displays all elements which are prime from singly linear linked list
//  Input  : Integer Pointer(Array Address)
//  Output : Void
//  Author : Sakshi Pradeep Bhapkar
//  Date : 06/01/2026
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
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(Head == NULL)
    {
        (*Head)=newn;
    }
    else
    {
        newn->next = (*Head);
        (*Head) = newn;
    }
}

void DisplayPrime(PNODE head)
{
    int iCnt = 0, iNo = 0, iSum = 0;


    while (head != NULL)
    {
        iNo = head->data;
        iSum = 1;

        for (iCnt = 2; iCnt <= iNo/2; iCnt++)
        {
            if((iNo%iCnt)==0)
            {
                iSum++;
            }
        }

        if(iSum==1)
        {
            printf("%d\t",iNo);
        }
        head = head-> next;
        
    }
    
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first,11);
    InsertFirst(&first,20);
    InsertFirst(&first,17);
    InsertFirst(&first,41);
    InsertFirst(&first,22);
    InsertFirst(&first,89);


    DisplayPrime(first);

}



