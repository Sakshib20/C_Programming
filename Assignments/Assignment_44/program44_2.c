///////////////////////////////////////////////////////////
//
//  Function Name : CountEven
//  Description : Returns the count of nodes containing even values in singly linear linked list
//  Input  : Integer Pointer(Array Address)
//  Output : Integer
//  Author : Sakshi Pradeep Bhapkar
//  Date : 07/01/2026
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

int CountEven(PNODE head)
{
    int iCount = 0;
    while(head != NULL)
    {
        if((head->data%2) == 0)
        {
            iCount++;
        }
        head = head->next;
    }

    return iCount;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first,640);
    InsertFirst(&first,240);
    InsertFirst(&first,230);
    InsertFirst(&first,110);
    InsertFirst(&first,11);
    InsertFirst(&first, 5);
    InsertFirst(&first,2);

    iRet = CountEven(first);

    printf("Number of even nodes are : %d",iRet);

    return 0;

}



