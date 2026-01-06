///////////////////////////////////////////////////////////
//
//  Function Name : SearchFirstOcc
//  Description : Search first Ocuurence of a particular element from singly linear linked list
//  Input  : Integer Pointer(Array Address), Integer
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

int SearchFirstOcc(PNODE Head, int no)
{
    int iPos = 0;

    iPos = 1;
    while(Head->next!=NULL)
    {
    
        if(Head->data == no)
        {
            return iPos;
        }
        else
        {
            Head = Head->next;
            iPos++;
        }
    }
}

int main()
{
    PNODE first = NULL;

    int iRet = 0;

    InsertFirst(&first,70);
    InsertFirst(&first,30);
    InsertFirst(&first,50);
    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

    iRet=SearchFirstOcc(first,50);
    printf("Position is : %d",iRet);

}



