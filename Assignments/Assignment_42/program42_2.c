///////////////////////////////////////////////////////////
//
//  Function Name : SearchLastOcc
//  Description : Search last Ocuurence of a particular element from singly linear linked list
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

int SearchLastOcc(PNODE Head, int no)
{
    int iCnt = 0, iPos = 0;

    
    while(Head!=NULL)
    {
        iCnt++;

        if(Head->data == no)
        {
            iPos = iCnt;
        }
        Head = Head->next;
        
    }
    return iPos;
}

int main()
{
    PNODE first = NULL;

    int iRet = 0;

    InsertFirst(&first,70);
    InsertFirst(&first,30);
    InsertFirst(&first,50);
    InsertFirst(&first,40);
    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

    iRet=SearchLastOcc(first,30);
    printf("Position is : %d",iRet);

}



