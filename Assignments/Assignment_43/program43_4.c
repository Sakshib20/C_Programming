///////////////////////////////////////////////////////////
//
//  Function Name : SecMaximum
//  Description : Returns second maximum from singly linear linked list
//  Input  : Integer Pointer(Array Address)
//  Output : Integer
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

int SecMaximum(PNODE head)
{
    int iMax = 0, iSmax = 0;

    while(head != NULL)
    {
        if((head->data)>iMax)
        {
            iSmax = iMax;
            iMax = head->data;
        }
        else if(((head->data)>iSmax) && ((head->data)<iMax))
        {
            iSmax = head->data;
        }
        head = head->next;
    }

    return iSmax;
    
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first,11);
    InsertFirst(&first,20);
    InsertFirst(&first,32);
    InsertFirst(&first,41);
    
    iRet = SecMaximum(first);

    printf("Second max  is : %d",iRet);

}



