///////////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Description : Returns addition of all element from singly linear linked list
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

int Addition(PNODE head)
{
    int iSum = 0;

    while(head != NULL)
    {
        iSum = iSum + head->data;
        head = head->next;
    }
    

    return iSum;
}

int main()
{
    PNODE first = NULL;

    int iRet = 0;

    InsertFirst(&first,40);
    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);
    
    iRet = Addition(first);

    printf("Addition is : %d",iRet);
}



