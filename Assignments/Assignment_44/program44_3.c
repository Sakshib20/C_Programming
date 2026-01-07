///////////////////////////////////////////////////////////
//
//  Function Name : CountOdd
//  Description : Returns the count of nodes containing odd values in singly linear linked list
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

int CountOdd(PNODE first)
{
    int iCount = 0;

    while (first != NULL)
    {
        if((first->data%2)!=0)
        {
            iCount++;
        }
        first = first->next;
    }

    return iCount;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 675);
    InsertFirst(&head, 342);
    InsertFirst(&head, 113);
    InsertFirst(&head, 457);
    InsertFirst(&head, 12);

    iRet = CountOdd(head);

    printf("Number of Odd nodes are : %d",iRet);

    return 0;
}




