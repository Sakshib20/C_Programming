///////////////////////////////////////////////////////////
//
//  Function Name : Maximum
//  Description : Returns the largest element from singly linear linked list
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

int Maximum(PNODE head)
{
    int iMax = 0;

    while (head != NULL)
    {
        if(head->data > iMax)
        {
            iMax = head->data;
        }
        head=head->next;
    }

    return iMax;
    
}

int main()
{
    PNODE first = NULL;

    int iRet = 0;

    InsertFirst(&first,240);
    InsertFirst(&first,320);
    InsertFirst(&first,230);
    InsertFirst(&first,110);
    
    iRet = Maximum(first);

    printf("Maximum is : %d",iRet);
}



